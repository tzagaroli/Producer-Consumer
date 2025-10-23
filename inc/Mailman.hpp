#ifndef MAILMAN_HPP
#define MAILMAN_HPP

#include "utils/Sleep.hpp"
#include "utils/Random.hpp"

#include "Worker.hpp"

class Mailman : public Worker
{
public:
    Mailman(Mailbox& mailbox, cANSI_t ansi);

    void work() override;

private:
    void postMessage(int message);
};

#endif // MAILMAN_HPP