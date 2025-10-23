#ifndef MAILBOX_HPP
#define MAILBOX_HPP

#include "Semaphore.hpp"

class Mailbox
{
public:
    Mailbox();
    ~Mailbox();

    void postMessage(int message);
    int retrieveMessage();

    Semaphore& getSemaphore();

private:
    int message_;
    Semaphore semaphore_;
};

#endif // MAILBOX_HPP