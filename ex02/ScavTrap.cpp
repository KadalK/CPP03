#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Scavtrap Constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Scavtrap Assignement Constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {
	std::cout << "Scavtrap Copy Constructor called" << std::endl;
	this->_hit = obj._hit;
	this->_attack = obj._attack;
	this->_energy = obj._energy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	if (this != &rhs)
	{
		this->_hit = rhs._hit;
		this->_attack = rhs._attack;
		this->_energy = rhs._energy;
		this->_name = rhs._name;
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_energy < 1 || this->_hit == 0)
		return ;
	std::cout << "Scavtrap " << this->_name << " attacks " << target << " causing " << this->_attack << " points of damage!" << std::endl;
	this->_energy--;
}

void	ScavTrap::guardGate() {
	std::cout << "Gate keeper !" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scavtrap Destructor called" << std::endl;
}