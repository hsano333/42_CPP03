#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool gate_keeper_mode_;
        const unsigned int const_hit_point_;
        const unsigned int const_energy_point_;
        const unsigned int const_attack_damege_;
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
