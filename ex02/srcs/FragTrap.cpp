#include "FragTrap.hpp"
#include <iostream>
using std::cout;
using std::endl;

FragTrap::FragTrap() : high_fives_("")
{
    cout << "[FragTrap]constructor called" << endl;
    this->hit_point_ = 100;
    this->energy_point_ = 100;
    this->attack_damege_ = 30;
}

FragTrap::FragTrap(string name) : high_fives_("")
{
    cout << "[FragTrap]constructor called" << endl;
    this->name_ = name;
    this->hit_point_ = 100;
    this->energy_point_ = 100;
    this->attack_damege_ = 30;
}

FragTrap::FragTrap(const FragTrap &flag) : ClapTrap(flag.name_) , high_fives_(flag.high_fives_) 
{
    cout << "[FragTrap]Copy constructor called" << endl;
    this->hit_point_ = flag.hit_point_;
    this->energy_point_ = flag.energy_point_;
    this->attack_damege_ = flag.attack_damege_;
}

void FragTrap::operator=(const FragTrap &frag)
{
    cout << "[FragTrap]Copy assignment operator called" << endl;
    this->name_ = frag.name_;
    this->hit_point_ = frag.hit_point_;
    this->energy_point_ = frag.energy_point_;
    this->attack_damege_ = frag.attack_damege_;
    this->high_fives_ = frag.high_fives_;
}
FragTrap::~FragTrap()
{
    cout << "[FragTrap][" << this->name_ << "]Destructor called" << endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->high_fives_ == "")
        cout << "[FragTrap] positive high fives request dose not exist" << endl;
    else
        cout << "[FragTrap] high fives request is [" <<  this->high_fives_  << "]" << endl;
}
