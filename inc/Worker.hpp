#ifndef WORKER_HPP
#define WORKER_HPP

#include "utils/ANSI.hpp"
#include "Mailbox.hpp"

// Worker class is a template for different types of workers in the system.
class Worker
{
public:
    virtual ~Worker() = default;
    virtual void work() = 0;

protected:
    Worker(Mailbox& mailbox, cANSI_t ansi);

    Mailbox& mailbox_;
    cANSI_t ansi_;
};

#endif // WORKER_HPP
