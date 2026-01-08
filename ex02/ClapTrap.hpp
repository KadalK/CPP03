#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	unsigned int _hit;
	unsigned int _energy;
	unsigned int _attack;
	ClapTrap(std::string name, unsigned int, unsigned int, unsigned int);

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap&);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


};


#endif