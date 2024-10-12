#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    health = FragTrap::health;
    energy = ScavTrap::energy;
    damage = FragTrap::damage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
    : ClapTrap(src), ScavTrap(src), FragTrap(src), name(src.name)
{
    std::cout << "DiamondTrap : Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << name << " : DiamondTrap : Destructor called" << std::endl;
}

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
    std::cout << "DiamondTrap : Assign constructor called" << std::endl;
	if ( this != &rhs )
	{
		name = rhs.name;
		health = rhs.health;
		energy = rhs.energy;
		damage = rhs.damage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << name << " and for ClapTrap, I am " << ClapTrap::name << std::endl;
}

void		DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}
