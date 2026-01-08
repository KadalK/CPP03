#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap Lopez("Lopez");
	ClapTrap Sunny("Sunnny");
	FragTrap Fabish("Fabish");


//Claptrap tests
	Sunny.attack("The fisc");
	Sunny.takeDamage(5);
	Sunny.beRepaired(5);

//Scavtrap tests
	Lopez.attack("Dead asshole");
	Lopez.takeDamage(5);
	Lopez.beRepaired(5);
	Lopez.guardGate();

//FragTrap tests
	Fabish.attack("The fridge");
	Fabish.takeDamage(5);
	Fabish.beRepaired(5);
	Fabish.guardGate();
	Fabish.highFivesGuys();
}