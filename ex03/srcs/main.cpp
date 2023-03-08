#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

/*
#include <stdio.h>
__attribute__((destructor)) void f(void){
    system("leaks Now_its_weird");
}
*/
int main(void)
{
    {
        //ClapTrap clap("Test_Clap_Name");
        DiamondTrap dia("Test_Diamond_Name");
        dia.attack("Enemy_Name");
        dia.takeDamage(0);
        dia.takeDamage(INT_MAX + 1u);
        dia.takeDamage(-3);
        dia.takeDamage(3);
        dia.takeDamage(30);
        dia.takeDamage(1);

        std::cout << std::endl;
        dia.whoAmI();
        //clap = dia;
        //clap.whoAmI();
        //clap.attack("Enemy_Name");


        dia.beRepaired(INT_MAX + 1u);
        dia.beRepaired(-1);
        dia.beRepaired(INT_MAX);
        dia.beRepaired(1);
        dia.takeDamage(INT_MAX);
        //for (int i=0; i < 50;i++)
            //dia.beRepaired(1);
        dia.attack("Enemy_Name");
        dia.beRepaired(1);
    }
    {
        std::cout << std::endl << "Test2" << endl;
        DiamondTrap dia("Test2");
        DiamondTrap dia2 = DiamondTrap(dia);
        DiamondTrap dia3;
        dia3 = dia;

        dia.attack("Enemy1");
        dia.whoAmI();
        dia2.attack("Enemy2");
        dia2.whoAmI();
        dia3.attack("Enemy3");
        dia3.whoAmI();

    }
    {
        cout << endl << "Test3" << endl;
        ClapTrap *clap1 = new ClapTrap();
        ClapTrap *frag1 = new DiamondTrap();
        ClapTrap *test;
        clap1->attack("Enemy1");
        frag1->attack("Enemy2");
        test = clap1;
        test->attack("Enemy3");
        test = frag1;
        test->attack("Enemy4");
        clap1->beRepaired(1);
        frag1->beRepaired(1);
        delete clap1;
        delete frag1;

    }

    return (0);
}
