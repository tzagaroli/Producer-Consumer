#include <thread>

#include <Mailbox.hpp>
#include <Amis.hpp>
#include <Mailman.hpp>

int main()
{
    Mailbox mailbox;
    Amis amis(mailbox, ansi::bright_cyan);
    Mailman mailman(mailbox, ansi::bright_magenta);

    std::thread amisThread(&Amis::work, &amis);
    std::thread mailmanThread(&Mailman::work, &mailman);

    while (true)
    {
    }

    return 0;
}
