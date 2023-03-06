#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void test(ClapTrap clap)
{
    clap.attack("Clap?");
}

int main(void)
{
    ClapTrap clap("Test Clap");
    ScavTrap scav("Test Scav");


    //clap = scav;
    //clap.guardGate();
    clap.attack("Enemy");
    test(clap);

    scav.attack("Enemy");
    test(scav);
    scav.takeDamage(0);
    scav.takeDamage(INT_MAX + 1u);
    scav.takeDamage(-3);
    scav.takeDamage(3);
    scav.takeDamage(30);
    scav.takeDamage(1);

    scav.guardGate();


    scav.beRepaired(INT_MAX + 1u);
    scav.beRepaired(-1);
    scav.beRepaired(INT_MAX);
    scav.beRepaired(1);
    scav.takeDamage(INT_MAX);
    //for (int i=0; i < 50;i++)
        //scav.beRepaired(1);
    scav.attack("Enemy");
    scav.beRepaired(1);

    return (0);
}
