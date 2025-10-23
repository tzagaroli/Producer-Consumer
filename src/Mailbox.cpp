#include "Mailbox.hpp"

Mailbox::Mailbox() : message_(0), semaphore_(false)
{
}

Mailbox::~Mailbox()
{
}

void Mailbox::postMessage(int message)
{
    semaphore_.wait_down();
    message_ = message;
    semaphore_.raise();
}

int Mailbox::retrieveMessage()
{
    semaphore_.wait_down();
    int message = message_;
    semaphore_.raise();
    return message;
}

Semaphore& Mailbox::getSemaphore()
{
    return semaphore_;
}
