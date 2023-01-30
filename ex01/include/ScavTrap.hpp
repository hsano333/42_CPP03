#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool gate_keeper_mode_;
    public:
        ScavTrap();
        ScavTrap(string name);
        ScavTrap(const ScavTrap &clap);
        void operator=(const ScavTrap &clap);
        ~ScavTrap();
        void guardGate(void);
};

#endif
