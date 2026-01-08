#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	unsigned int _hit;
	unsigned int _energy;
	unsigned int _attack;
public:
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int, unsigned int, unsigned int);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


};


#endif