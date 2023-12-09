#include "Zombie.hpp"

int main() {
    // Create a new Zombie instance
    Zombie* zombie1 = newZombie("Zombie1");

    // Set the name of the Zombie instance
    zombie1->setName("Zombie1");

    // Call the announce method
    zombie1->announce();

    // Create another Zombie instance using the randomChump function
    randomChump("Zombie2");

    // Delete the Zombie instances
    delete zombie1;

    return 0;
}