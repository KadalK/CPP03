#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Constructor called" << std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Assignement Constructor called" << std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj) {
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	this->_hit = obj._hit;
	this->_attack = obj._attack;
	this->_energy = obj._energy;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
	{
		this->_hit = rhs._hit;
		this->_attack = rhs._attack;
		this->_energy = rhs._energy;
		this->_name = rhs._name;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "High fives ! 🤪" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Copy Destructor called" << std::endl;
}