#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        string high_fives_;
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
