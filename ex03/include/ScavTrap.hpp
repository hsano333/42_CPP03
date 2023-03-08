#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        bool gate_keeper_mode_;
        //unsigned int hit_point_;
        const unsigned int const_energy_point_;
        //unsigned int attack_damege_;
    public:
        ScavTrap();
        ScavTrap(string name);
        ScavTrap(const ScavTrap &clap);
        ScavTrap& operator=(const ScavTrap &clap);
        virtual ~ScavTrap();
        virtual void attack(const std::string& target);
        void guardGate(void);
};

#endif
