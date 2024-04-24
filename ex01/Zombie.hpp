#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public:
	    Zombie();
        ~Zombie();
        
        const std::string& getZombie(void) const;
        void    setZombie(std::string& name);
        void    announce(void);
    
    private:
        std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
