#ifndef AMIS_HPP
#define AMIS_HPP

#include "utils/Sleep.hpp"
#include "utils/Random.hpp"

#include "Worker.hpp"

class Amis : public Worker
{
public:
    Amis(Mailbox& mailbox, cANSI_t ansi);

    void work() override;

private:
    int retrieveMessage();
};


#endif // AMIS_HPP