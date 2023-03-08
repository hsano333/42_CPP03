#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap() : ClapTrap("name_clap_name") 
                             , ScavTrap("name_clap_name")
                             , FragTrap("name_clap_name")
                             , name_("name")
{
    cout << "[DiamondTrap] Default constructor called" << endl;
    this->hit_point_ = this->FragTrap::const_hit_point_;
    this->energy_point_ = this->ScavTrap::const_energy_point_;
    this->attack_damege_ = this->FragTrap::const_attack_damege_;
    //this->test();
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name")
                                        , ScavTrap(name + "_clap_name")
                                        , FragTrap(name + "_clap_name")
                                        , name_(name)
{
    cout << "[DiamondTrap] constructor called" << endl;
    this->hit_point_ = this->FragTrap::const_hit_point_;
    this->energy_point_ = this->ScavTrap::const_energy_point_;
    this->attack_damege_ = this->FragTrap::const_attack_damege_;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia) : ClapTrap(dia)
                                                    , ScavTrap(dia)
                                                    , FragTrap(dia)
                                                    , name_(dia.name_)
                                                    //, hit_point_(FragTrap::hit_point_)
                                                    //, energy_point_(ScavTrap::energy_point_)
                                                    //, attack_damege_(FragTrap::attack_damege_)
{
    cout << "[DiamondTrap]Copy constructor called" << endl;
    this->hit_point_ = dia.hit_point_;
    this->energy_point_ = dia.energy_point_;
    this->attack_damege_ = dia.attack_damege_;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &dia)
{
    cout << "[DiamondTrap]Copy assignment operator called" << endl;
    if (this == &dia)
        return (*this);
    this->ClapTrap::operator=(dia);
    this->ScavTrap::operator=(dia);
    this->FragTrap::operator=(dia);
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

void DiamondTrap::test()
{
    cout << "Diamond" << endl;
    cout << "this->hit_point:" << &this->hit_point_ << endl;
    cout << "this->enerty_point:" << &this->energy_point_ << endl;
    cout << "this->attack_damege:" << &this->attack_damege_ << endl;
    cout << endl << "Frag" << endl;
    cout << "this->hit_point:" << &this->FragTrap::hit_point_ << endl;
    cout << "this->enerty_point:" << &this->FragTrap::energy_point_ << endl;
    cout << "this->attack_damege:" << &this->FragTrap::attack_damege_ << endl;
    cout << endl << "Scav" << endl;
    cout << "this->hit_point:" << &this->ScavTrap::hit_point_ << endl;
    cout << "this->enerty_point:" << &this->ScavTrap::energy_point_ << endl;
    cout << "this->attack_damege:" << &this->ScavTrap::attack_damege_ << endl;
    cout << endl << "Clap" << endl;
    cout << "this->hit_point:" << &this->ClapTrap::hit_point_ << endl;
    cout << "this->enerty_point:" << &this->ClapTrap::energy_point_ << endl;
    cout << "this->attack_damege:" << &this->ClapTrap::attack_damege_ << endl;



    cout << "Diamond" << endl;
    cout << "this->hit_point:" << this->hit_point_ << endl;
    cout << "this->enerty_point:" << this->energy_point_ << endl;
    cout << "this->attack_damege:" << this->attack_damege_ << endl;
    cout << endl << "Frag" << endl;
    cout << "this->hit_point:" << this->FragTrap::hit_point_ << endl;
    cout << "this->enerty_point:" << this->FragTrap::energy_point_ << endl;
    cout << "this->attack_damege:" << this->FragTrap::attack_damege_ << endl;
    cout << endl << "Scav" << endl;
    cout << "this->hit_point:" << this->ScavTrap::hit_point_ << endl;
    cout << "this->enerty_point:" << this->ScavTrap::energy_point_ << endl;
    cout << "this->attack_damege:" << this->ScavTrap::attack_damege_ << endl;
    cout << endl << "Clap" << endl;
    cout << "this->hit_point:" << this->ClapTrap::hit_point_ << endl;
    cout << "this->enerty_point:" << this->ClapTrap::energy_point_ << endl;
    cout << "this->attack_damege:" << this->ClapTrap::attack_damege_ << endl;
}
