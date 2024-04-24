#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    public:
        Zombie(); // default constructor
	    Zombie(std::string& name); // parametrized constructor
	    ~Zombie(); // default destructor

        const std::string& getZombie(void) const;
        void    setZombie(std::string& name);
        void    announce(void);
   
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
