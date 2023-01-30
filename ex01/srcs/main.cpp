#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Test Clap");
    ScavTrap scav("Test Scav");
    scav.attack("Enemy");
    scav.takeDamage(0);
    scav.takeDamage(INT_MAX + 1u);
    scav.takeDamage(-3);
    scav.takeDamage(3);
    scav.takeDamage(30);
    scav.takeDamage(1);

    scav.guardGate();
    //clap = scav;
    //clap.guardGate();
    clap.attack("Enemy");


    scav.beRepaired(INT_MAX + 1u);
    scav.beRepaired(-1);
    scav.beRepaired(INT_MAX);
    scav.beRepaired(1);
    scav.takeDamage(INT_MAX);
    for (int i=0; i < 50;i++)
        scav.beRepaired(1);
    scav.attack("Enemy");
    scav.beRepaired(1);

    return (0);
}
