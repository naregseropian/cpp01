#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Complain level: Debug" << std::endl;
    harl.complain("DEBUG");
    std::cout << "Complain level: Info" << std::endl;
    harl.complain("INFO");
    std::cout << "Complain level: Warning" << std::endl;
    harl.complain("WARNING");
    std::cout << "Complain level: Error" << std::endl;
    harl.complain("ERROR");
    return 0;
}
