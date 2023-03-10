#include "ScavTrap.hpp"
#include <iostream>
using std::cout;
using std::endl;

ScavTrap::ScavTrap() :  ClapTrap(), gate_keeper_mode_(false)
{
    cout << "[ScavTrap] Default constructor called" << endl;
    this->name_ = "name";
    this->hit_point_ = 100;
    this->energy_point_ = 50;
    this->attack_damege_ = 20;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name), gate_keeper_mode_(false)
{
    cout << "[ScavTrap]constructor called" << endl;
    this->name_ = name;
    this->hit_point_ = 100;
    this->energy_point_ = 50;
    this->attack_damege_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav) , gate_keeper_mode_(scav.gate_keeper_mode_) 
{
    cout << "[ScavTrap]Copy constructor called" << endl;
    this->name_ = scav.name_;
    this->hit_point_ = scav.hit_point_;
    this->energy_point_ = scav.energy_point_;
    this->attack_damege_ = scav.attack_damege_;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scav)
{
    cout << "[ScavTrap]Copy assignment operator called" << endl;
    if (this == &scav)
        return (*this);
    this->ClapTrap::operator=(scav);
    this->name_ = scav.name_;
    this->hit_point_ = scav.hit_point_;
    this->energy_point_ = scav.energy_point_;
    this->attack_damege_ = scav.attack_damege_;
    this->gate_keeper_mode_ = scav.gate_keeper_mode_;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    cout << "[ScavTrap][" << this->name_ << "]Destructor called" << endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hit_point_ == 0)
    {
        cout << "[ScavTrap][attack]Cannot attack. Because Hit Points is Zero" << endl;
        return ;
    }
    if (this->energy_point_ == 0)
    {
        cout << "[ScavTrap][attack]Cannot attack. Because Energy Points is Zero" << endl;
        return ;
    }
    cout << "[ScavTrap][attack]ScavTrap " << this->name_;
    cout << " attacks " << target;
    cout << " causing " << this->attack_damege_;
    cout << " points of damage!";
    cout << endl;

    this->energy_point_ -= 1;
    cout << "[ScavTrap]Remaining Energy Points is " << this->energy_point_ << endl;
}

void ScavTrap::guardGate(void)
{
    if (this->gate_keeper_mode_)
        cout << "[ScavTrap] Gate keeper mode is ON" << endl;
    else
        cout << "[ScavTrap] Gate keeper mode is OFF" << endl;
}
