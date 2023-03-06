#include "ClapTrap.hpp"
#include <iostream>

/*
#include <stdio.h>
__attribute__((destructor)) void f(void){
    system("leaks Aaaaand...OPEN!");
}
*/
int main(void)
{
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
    }
    {
        std::cout << std::endl;
        ClapTrap clap("Test2");
        ClapTrap clap2 = ClapTrap(clap);
        ClapTrap clap3;
        clap3 = clap;

        clap.attack("Enemy1");
        clap2.attack("Enemy2");
        clap3.attack("Enemy3");

    }
    return (0);
}
