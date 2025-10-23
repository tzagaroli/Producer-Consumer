#include <iostream>

#include "Amis.hpp"

Amis::Amis(Mailbox& mailbox, cANSI_t ansi)
    : Worker(mailbox, ansi)
{
}

void Amis::work()
{
    while (true)
    {
        int sleepDuration = utils::random_int(1000, 5000);
        utils::sleep_ms(std::chrono::milliseconds(sleepDuration));
        int message = retrieveMessage();
        std::cout << ansi_ << "Amis received message: " << message << ansi::reset << std::endl;
    }
}

int Amis::retrieveMessage()
{
    int message;
    mailbox_.getSemaphore().wait_up();
    message = mailbox_.retrieveMessage();
    mailbox_.getSemaphore().lower();
    return message;
}