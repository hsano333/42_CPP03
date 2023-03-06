#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() : ClapTrap("name_clap_name")
                             , FragTrap("name_clap_name")
                             , ScavTrap("name_clap_name")
                             , name_("name")
{
    cout << "[DiamondTrap] Default constructor called" << endl;
    this->name_ = "name";
    this->hit_point_ = this->FragTrap::hit_point_;
    this->energy_point_ = this->ScavTrap::energy_point_;
    this->attack_damege_ = this->FragTrap::attack_damege_;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name")
                                        , FragTrap(name + "_clap_name")
                                        , ScavTrap(name + "_clap_name")
                                        , name_(name)
{
    cout << "[DiamondTrap] constructor called" << endl;
    this->name_ = name;
    this->hit_point_ = this->FragTrap::hit_point_;
    this->energy_point_ = this->ScavTrap::energy_point_;
    this->attack_damege_ = this->FragTrap::attack_damege_;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia) : ClapTrap(dia.ClapTrap::name_)
                                                   , FragTrap(dia.FragTrap::name_)
                                                   , ScavTrap(dia.ScavTrap::name_)
                                                   , name_(dia.name_)
{
    cout << "[DiamondTrap]Copy constructor called" << endl;
    //this->name_ = dia.name_;
    this->hit_point_ = dia.hit_point_;
    this->energy_point_ = dia.energy_point_;
    this->attack_damege_ = dia.attack_damege_;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &dia)
{
    cout << "[DiamondTrap]Copy assignment operator called" << endl;
    if (this == &dia)
        return (*this);
    this->ScavTrap::operator=(dia);
    this->FragTrap::operator=(dia);
    this->ClapTrap::operator=(dia);
    this->ClapTrap::name_ = dia.ClapTrap::name_;
    this->name_ = dia.name_;
    this->hit_point_ = dia.hit_point_;
    this->energy_point_ = dia.energy_point_;
    this->attack_damege_ = dia.attack_damege_;
    return (*this);
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

