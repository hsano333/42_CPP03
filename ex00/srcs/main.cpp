#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("Test");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.takeDamage(2);
    clap.takeDamage(30);
    clap.beRepaired(UINT_MAX);
    clap.beRepaired(1);
    clap.takeDamage(UINT_MAX);
    clap.takeDamage(1);
    clap.beRepaired(1);
    clap.beRepaired(1);
    clap.beRepaired(1);
    clap.beRepaired(1);
    clap.beRepaired(1);
    clap.beRepaired(1);
    clap.beRepaired(1);

    clap.beRepaired(1);
    clap.attack("Enemy");
    clap.beRepaired(1);
    return (0);
}
