#include "Zombie.hpp"

int main() {
    // Create a new Zombie instance
    Zombie* zombie1 = new Zombie();

    // Set the name of the Zombie instance
    zombie1->setName("Zombie1");

    // Call the announce method
    zombie1->announce();

    // Create a Zombie horde
    int hordeSize = 5;
    Zombie* horde = zombieHorde(hordeSize, "HordeZombie");

    // Delete the Zombie instances
    delete zombie1;
    delete[] horde;

    return 0;
}