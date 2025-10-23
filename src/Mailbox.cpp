#include "Mailbox.hpp"

Mailbox::Mailbox() : message_(0), semaphore_(false)
{
}

Mailbox::~Mailbox()
{
}

void Mailbox::postMessage(int message)
{
    message_ = message;
}

int Mailbox::retrieveMessage()
{
    return message_;
}

Semaphore& Mailbox::getSemaphore()
{
    return semaphore_;
}
