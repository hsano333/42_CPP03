#ifndef  DIAMONDTRAP_H
#define  DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
    private:
        string name_;
    public:
        DiamondTrap();
        DiamondTrap(string name);
        DiamondTrap(const DiamondTrap &diamond);
        void operator=(const DiamondTrap &diamond);
        ~DiamondTrap();
        virtual void attack(const std::string & target);
        void whoAmI(void);


};

#endif
