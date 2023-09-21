#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}