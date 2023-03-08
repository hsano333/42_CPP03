#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        string high_fives_;
        const unsigned int const_hit_point_;
        //unsigned int energy_point_;
        const unsigned int const_attack_damege_;
    public:
        FragTrap();
        FragTrap(string name);
        FragTrap(const FragTrap &clap);
        FragTrap& operator=(const FragTrap &clap);
        virtual ~FragTrap();
        virtual void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
