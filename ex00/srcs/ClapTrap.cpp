#include "ClapTrap.hpp"

using std::cout;
using std::endl;

/*
ClapTrap::ClapTrap()
{

    cout << "Default constructor called" << endl;
    this->name_ = "name";
    this->hit_point_ = 25;
    this->energy_point_ = 10;
    this->attack_damege_ = 5;
}
*/

ClapTrap::ClapTrap(string name)
{
    cout << "constructor called" << endl;
    this->name_ = name;
    this->hit_point_ = 10;
    this->energy_point_ = 10;
    this->attack_damege_ = 0;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    cout << "Copy constructor called" << endl;
    this->name_ = clap.name_;
    this->hit_point_ = clap.hit_point_;
    this->energy_point_ = clap.energy_point_;
    this->attack_damege_ = clap.attack_damege_;
}

void ClapTrap::operator=(const ClapTrap &clap)
{
    cout << "Copy assignment operator called" << endl;
    this->name_ = clap.name_;
    this->hit_point_ = clap.hit_point_;
    this->energy_point_ = clap.energy_point_;
    this->attack_damege_ = clap.attack_damege_;
}
ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_point_ == 0)
    {
        cout << "[attack]Cannot attack. Because Energy Points is Zero" << endl;
        return ;
    }
    cout << "[attack]ClapTrap " << this->name_;
    cout << " attacks " << target;
    cout << " causing " << this->attack_damege_;
    cout << " points of damage!";
    cout << endl;

    this->energy_point_ -= 1;
    cout << "Remaining Energy Points is " << this->energy_point_ << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_point_ == 0)
    {
        cout << "[takeDatame]Cannot take damage. Because Remaining Hit Points is Zero" << endl;
        return ;
    }
    //if (amount > this->max_)
    //{
        //cout << "[takeDatame]Cannot take damage. amount is lather than MAX" << endl;
        //return ;
    //}
    cout << "[takeDatame]ClapTrap " << this->name_;
    cout << " takes " << amount << " damage.";
    cout << endl;

    if (this->hit_point_ >= amount)
        this->hit_point_ -= amount;
    else
        this->hit_point_ = 0;
    cout << " Remaining Hit Points is " << this->hit_point_ << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_point_ == 0)
    {
        cout << "[beRepaired]Cannot repaired. Because Remaining Energy Points is Zero" << endl;
        return ;
    }
    if (this->hit_point_ == UINT_MAX)
    {
        cout << "[beRepaired]Cannot repaired. Because Remaining Energy Points is MAX" << endl;
        return ;
    }
    //if (amount > this->max_)
    //{
        //cout << "[beRepaired]Cannot repaired. amount is lather than MAX" << endl;
        //return ;
    //}
    cout << "[beRepaired]ClapTrap " << this->name_;
    cout << " is Repaired" << amount << endl;
    this->energy_point_ -= 1;
    cout << "Remaining Energy Points is " << this->energy_point_ << endl;
    if (UINT_MAX - this->hit_point_ >= amount)
        this->hit_point_ += amount;
    else
        this->hit_point_ = UINT_MAX;
    cout << "Remaining Hit Points is " << this->hit_point_ << endl;
}
