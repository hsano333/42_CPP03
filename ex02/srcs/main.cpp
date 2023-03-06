#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include  "FragTrap.hpp"

int main(void)
{
    {
        ClapTrap clap("Test Clap");
        FragTrap frag("Test Frag");
        frag.attack("Enemy");

        frag.takeDamage(0);
        frag.takeDamage(INT_MAX + 1u);
        frag.takeDamage(-3);
        frag.takeDamage(3);
        frag.takeDamage(30);
        frag.takeDamage(1);

        std::cout << std::endl;
        frag.highFivesGuys();
        //clap = frag;
        //clap.guardGate();
        clap.attack("Enemy");


        frag.beRepaired(INT_MAX + 1u);
        frag.beRepaired(-1);
        frag.beRepaired(INT_MAX);
        frag.beRepaired(1);
        frag.takeDamage(INT_MAX);
        //for (int i=0; i < 100;i++)
            //frag.beRepaired(1);
        frag.attack("Enemy");
        frag.beRepaired(1);
    }
    {
        ClapTrap *clap1 = new ClapTrap();
        ClapTrap *frag1 = new FragTrap();
        ClapTrap *test;
        clap1->attack("Test1");
        frag1->attack("Test2");
        test = clap1;
        test->attack("Test3");
        test = frag1;
        test->attack("Test4");
        delete clap1;
        delete frag1;
    }

    return (0);
}
