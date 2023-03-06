#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap clap("Test_Clap_Name");
    DiamondTrap dia("Test_Diamond_Name");
    dia.attack("Enemy_Name");
    dia.takeDamage(0);
    dia.takeDamage(INT_MAX + 1u);
    dia.takeDamage(-3);
    dia.takeDamage(3);
    dia.takeDamage(30);
    dia.takeDamage(1);

    dia.highFivesGuys();
    clap = dia;
    //clap.whoAmI();
    clap.attack("Enemy_Name");


    dia.beRepaired(INT_MAX + 1u);
    dia.beRepaired(-1);
    dia.beRepaired(INT_MAX);
    dia.beRepaired(1);
    dia.takeDamage(INT_MAX);
    //for (int i=0; i < 50;i++)
        //dia.beRepaired(1);
    dia.attack("Enemy_Name");
    dia.beRepaired(1);
    dia.whoAmI();

    return (0);
}
