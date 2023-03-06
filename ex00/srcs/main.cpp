#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("Test");
    ClapTrap clap2;
    clap.attack("Enemy");
    clap.takeDamage(0);
    clap.takeDamage(INT_MAX + 1u);
    clap.takeDamage(-3);
    clap.takeDamage(3);
    clap.takeDamage(30);
    clap.takeDamage(1);

    clap.beRepaired(INT_MAX + 1u);
    clap.beRepaired(-1);
    clap.beRepaired(INT_MAX);
    clap.beRepaired(1);
    clap.takeDamage(INT_MAX);
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
