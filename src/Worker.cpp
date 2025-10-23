#include "Worker.hpp"

Worker::Worker(Mailbox& mailbox, cANSI_t ansi)
    : mailbox_(mailbox), ansi_(ansi)
{
}