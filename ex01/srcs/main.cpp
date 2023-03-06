#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void test(ClapTrap &clap)
{
    clap.attack("Clap?");
}

int main(void)
{
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

        std::cout << std::endl;
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
    }

    {
        ClapTrap *clap1 = new ClapTrap();
        ClapTrap *scav1 = new ScavTrap();
        ClapTrap *test;
        clap1->attack("Test1");
        scav1->attack("Test2");
        test = clap1;
        test->attack("Test3");
        test = scav1;
        test->attack("Test4");
        delete clap1;
        delete scav1;
    }
    return (0);
}
