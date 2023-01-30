#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
        string high_fives_;
    public:
        FragTrap();
        FragTrap(string name);
        FragTrap(const FragTrap &clap);
        void operator=(const FragTrap &clap);
        ~FragTrap();
        void highFivesGuys(void);
        void attack(const std::string & target);
};

#endif
