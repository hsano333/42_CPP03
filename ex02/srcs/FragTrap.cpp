#include "FragTrap.hpp"
#include <iostream>
using std::cout;
using std::endl;

FragTrap::FragTrap() : ClapTrap(), high_fives_("")
{
    cout << "[FragTrap] Default constructor called" << endl;
    this->name_ = "name";
    this->hit_point_ = 100;
    this->energy_point_ = 100;
    this->attack_damege_ = 30;
}

FragTrap::FragTrap(string name) : ClapTrap(name), high_fives_("")
{
    cout << "[FragTrap]constructor called" << endl;
    this->name_ = name;
    this->hit_point_ = 100;
    this->energy_point_ = 100;
    this->attack_damege_ = 30;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag) , high_fives_(frag.high_fives_) 
{
    cout << "[FragTrap]Copy constructor called" << endl;
    this->name_ = frag.name_;
    this->hit_point_ = frag.hit_point_;
    this->energy_point_ = frag.energy_point_;
    this->attack_damege_ = frag.attack_damege_;
}

FragTrap& FragTrap::operator=(const FragTrap &frag)
{
    cout << "[FragTrap]Copy assignment operator called" << endl;
    if (this == &frag)
        return (*this);
    this->ClapTrap::operator=(frag);
    this->name_ = frag.name_;
    this->hit_point_ = frag.hit_point_;
    this->energy_point_ = frag.energy_point_;
    this->attack_damege_ = frag.attack_damege_;
    this->high_fives_ = frag.high_fives_;
    return (*this);
}
FragTrap::~FragTrap()
{
    cout << "[FragTrap][" << this->name_ << "]Destructor called" << endl;
}

void FragTrap::attack(const std::string & target)
{
    if (this->hit_point_ == 0)
    {
        cout << "[FragTrap][attack]Cannot attack. Because Hit Points is Zero" << endl;
        return ;
    }
    if (this->energy_point_ == 0)
    {
        cout << "[FragTrap][attack]Cannot attack. Because Energy Points is Zero" << endl;
        return ;
    }
    cout << "[FragTrap][attack]FragTrap " << this->name_;
    cout << " attacks " << target;
    cout << " causing " << this->attack_damege_;
    cout << " points of damage!";
    cout << endl;

    this->energy_point_ -= 1;
    cout << "[FragTrap]Remaining Energy Points is " << this->energy_point_ << endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->high_fives_ == "")
        cout << "[FragTrap] positive high fives request dose not exist" << endl;
    else
        cout << "[FragTrap] high fives request is [" <<  this->high_fives_  << "]" << endl;
}
