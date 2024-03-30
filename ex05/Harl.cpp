#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl Contructor called" << std::endl;
    return;
}

Harl::~Harl()
{
    std::cout << "Harl Destructor called" << std::endl;
    return;
}

void Harl::debug(void)
{
    std::cout << DEBUG_MSG << std::endl;
    return;
}

void Harl::info(void)
{
    std::cout << INFO_MSG << std::endl;
    return;
}

void Harl::warning(void)
{
    std::cout << WARNING_MSG << std::endl;
    return;
}

void Harl::error(void)
{
    std::cout << ERROR_MSG << std::endl;
    return;
}

void    Harl::complain(std::string level)
{
    typedef void (Harl::*ptrToMemberFunction)(void);
    ptrToMemberFunction complainFunctions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string complainLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if (level == complainLevels[i])
        {
            (this->*complainFunctions[i])();
            break;
        }
    }
}
