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
        clap.attack("Enemy");
        clap.attack("Enemy");
        clap.attack("Enemy");
        clap.takeDamage(0);
        clap.takeDamage(INT_MAX + 1u); //error
        clap.takeDamage(-3); //error
        clap.takeDamage(3);
        clap.takeDamage(1);

        clap.beRepaired(1);
        clap.beRepaired(1);
        clap.beRepaired(1);
        clap.beRepaired(1);
        clap.beRepaired(1);
        clap.beRepaired(INT_MAX + 1u); //error
        clap.beRepaired(-1); //error
        clap.beRepaired(INT_MAX);
        clap.beRepaired(1);
        //clap.takeDamage(INT_MAX);
        clap.beRepaired(1); //error
        clap.beRepaired(1); //error

        clap.beRepaired(1);  //error
        clap.attack("Enemy"); //error
        clap.beRepaired(1); //error
    }
    {

        std::cout << "Test2" <<  std::endl;
        ClapTrap clap("Test2");
        ClapTrap clap2 = ClapTrap(clap);
        ClapTrap clap3;
        clap3 = clap;

        clap.attack("Enemy1");
        clap2.attack("Enemy2");
        clap3.attack("Enemy3");
        clap.takeDamage(INT_MAX);
        clap.attack("Enemy1");
        clap.beRepaired(10);
        clap3 = clap;
        clap3.attack("Enemy3");
        clap3.beRepaired(10);

    }
    return (0);
}
