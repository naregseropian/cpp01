#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
	    Zombie(std::string _name);
	    Zombie();
        ~Zombie();
        void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);
#endif
