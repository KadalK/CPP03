#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	this->_hit = obj._hit;
	this->_attack = obj._attack;
	this->_energy = obj._energy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	if (this != &rhs)
	{
		this->_hit = rhs._hit;
		this->_attack = rhs._attack;
		this->_energy = rhs._energy;
		this->_name = rhs._name;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 1 || this->_hit == 0)
		return ;
	std::cout << "Claptrap attacks " << target << " causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit == 0)
	{
		std::cout << "Omae wa mou shindeiru" << std::endl;
		return ;
	}
	std::cout << "Claptrap taken " << amount << " points of damage!" << std::endl;
	this->_hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hit == 0)
	{
		std::cout << "Omae wa mou shindeiru" << std::endl;
		return ;
	}
	if (this->_energy < 1)
	{
		std::cout << "No energy enough for that" << std::endl;
		return ;
	}
	std::cout << "Claptrap been repaired " << amount << " hp" << std::endl;
	this->_energy--;
	if (this->_hit + amount >= 10)
		this->_hit =  10;
	else
		this->_hit += amount;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}