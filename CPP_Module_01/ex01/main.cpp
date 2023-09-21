#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(2, "Little Zombie");
    for(int i = 0; i < 2; i++)
    {
        zombies[i].announce();
    }

    delete[] zombies;
    return(0);
}