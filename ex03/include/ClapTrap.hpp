#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

using std::string;

class ClapTrap
{
    protected:
        string name_;
        unsigned int hit_point_;
        unsigned int energy_point_;
        unsigned int attack_damege_;
        const static unsigned int max_ = INT_MAX;
    public:
        ClapTrap();
        ClapTrap(string name);
        ClapTrap(const ClapTrap &clap);
        void operator=(const ClapTrap &clap);
        ~ClapTrap();
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif