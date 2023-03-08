#ifndef  DIAMONDTRAP_H
#define  DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        string name_;
        void test();
    public:
        DiamondTrap();
        DiamondTrap(string name);
        DiamondTrap(const DiamondTrap &diamond);
        DiamondTrap& operator=(const DiamondTrap &diamond);
        virtual ~DiamondTrap();
        virtual void attack(const std::string & target);
        void whoAmI(void);
};

#endif
