#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

using std::string;

class ClapTrap
{
    private:
        string name_;
        unsigned int hit_point_;
        unsigned int energy_point_;
        unsigned int attack_damege_;
        const static unsigned int max_ = INT_MAX;
    public:
        ClapTrap();
        ClapTrap(string name);
        ClapTrap(const ClapTrap &clap);
        ClapTrap& operator=(const ClapTrap &clap);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
