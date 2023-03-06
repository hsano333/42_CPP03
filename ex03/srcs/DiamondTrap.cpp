#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() : ClapTrap("name_clap_name")
{
    cout << "[DiamondTrap] default constructor called" << endl;
    this->name_ = "name";
    this->hit_point_ = this->FragTrap::hit_point_;
    this->energy_point_ = this->ScavTrap::energy_point_;
    this->attack_damege_ = this->FragTrap::attack_damege_;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name")
{
    cout << "[DiamondTrap] constructor called" << endl;
    this->name_ = name;
    this->hit_point_ = this->FragTrap::hit_point_;
    this->energy_point_ = this->ScavTrap::energy_point_;
    this->attack_damege_ = this->FragTrap::attack_damege_;
}

DiamondTrap::DiamondTrap(const DiamondTrap &scav) : ClapTrap(scav.ClapTrap::name_)
{
    cout << "[DiamondTrap]Copy constructor called" << endl;
    this->name_ = scav.name_;
    this->hit_point_ = scav.hit_point_;
    this->energy_point_ = scav.energy_point_;
    this->attack_damege_ = scav.attack_damege_;
}

void DiamondTrap::operator=(const DiamondTrap &scav)
{
    cout << "[DiamondTrap]Copy assignment operator called" << endl;
    this->ClapTrap::name_ = scav.ClapTrap::name_;
    this->name_ = scav.name_;
    this->hit_point_ = scav.hit_point_;
    this->energy_point_ = scav.energy_point_;
    this->attack_damege_ = scav.attack_damege_;
}

DiamondTrap::~DiamondTrap()
{
    cout << "[DiamondTrap][" << this->name_ << "]Destructor called" << endl;
};

void DiamondTrap::attack(const std::string & target)
{
    this->ScavTrap::attack(target);
}


void DiamondTrap::whoAmI(void)
{
    cout << "[DiamondTrap]DiamondTrap's name is " << this->name_ << endl;
    cout << "[DiamondTrap]ClapTrap's name is " << this->ClapTrap::name_ << endl;
}

