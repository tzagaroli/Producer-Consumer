#include <iostream>

#include "Mailman.hpp"

Mailman::Mailman(Mailbox& mailbox, cANSI_t ansi)
    : Worker(mailbox, ansi)
{
}

void Mailman::work()
{
    int message = 0;
    while (true)
    {
        int sleepDuration = utils::random_int(1000, 5000);
        utils::sleep_ms(std::chrono::milliseconds(sleepDuration));
        postMessage(message++);
        std::cout << ansi_ << "Mailman sent message: " << message << ansi::reset << std::endl;
    }
}

void Mailman::postMessage(int message)
{
    mailbox_.getSemaphore().wait_down();
    mailbox_.postMessage(message);
    mailbox_.getSemaphore().raise();
}