#include "Zombie.hpp"

int	main(void)
{
	std::cout << "------------- stackZombies -------------" << std::endl;
	Zombie	zombie1("Zombie1");
	Zombie	zombie2("Zombie2");
	Zombie	zombie3;

	zombie1.announce();
	zombie2.announce();
	zombie3.announce();
	randomChump("randomChumpZombie");

	std::cout << std::endl;
	std::cout << "------------- heapZombies -------------" << std::endl;
	Zombie	*heapZombies;

	heapZombies = newZombie("HeapZombie");
	heapZombies->announce();
	delete(heapZombies);

	return (0);
}