#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Lopez("Lopez");
	ClapTrap Sunny("Sunnny");

//Claptrap tests
	Sunny.attack("The fisc");
	Sunny.takeDamage(5);
	Sunny.beRepaired(5);

//Scavtrap tests
	Lopez.attack("******* de ses morts");
	Lopez.takeDamage(5);
	Lopez.beRepaired(5);
	Lopez.guardGate();
}