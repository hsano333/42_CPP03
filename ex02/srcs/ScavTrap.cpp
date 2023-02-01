#include "ScavTrap.hpp"
#include <iostream>
using std::cout;
using std::endl;

ScavTrap::ScavTrap() : gate_keeper_mode_(false)
{
    cout << "[ScavTrap]Default constructor called" << endl;
    this->hit_point_ = 100;
    this->energy_point_ = 50;
    this->attack_damege_ = 20;
}

ScavTrap::ScavTrap(string name) : gate_keeper_mode_(false)
{
    cout << "[ScavTrap]constructor called" << endl;
    this->name_ = name;
    this->hit_point_ = 100;
    this->energy_point_ = 50;
    this->attack_damege_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &clap) : ClapTrap(clap.name_) , gate_keeper_mode_(clap.gate_keeper_mode_) 
{
    cout << "[ScavTrap]Copy constructor called" << endl;
    this->hit_point_ = clap.hit_point_;
    this->energy_point_ = clap.energy_point_;
    this->attack_damege_ = clap.attack_damege_;
}

void ScavTrap::operator=(const ScavTrap &scav)
{
    cout << "[ScavTrap]Copy assignment operator called" << endl;
    this->name_ = scav.name_;
    this->hit_point_ = scav.hit_point_;
    this->energy_point_ = scav.energy_point_;
    this->attack_damege_ = scav.attack_damege_;
    this->gate_keeper_mode_ = scav.gate_keeper_mode_;
}
ScavTrap::~ScavTrap()
{
    cout << "[ScavTrap][" << this->name_ << "]Destructor called" << endl;
}

void ScavTrap::guardGate(void)
{
    if (this->gate_keeper_mode_)
        cout << "[ScavTrap] Gate keeper mode is ON" << endl;
    else
        cout << "[ScavTrap] Gate keeper mode is OFF" << endl;
}
