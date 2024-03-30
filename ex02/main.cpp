#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << "mem addr. of str:    " << &str << std::endl;
    std::cout << "mem addr. of strPtr: " << strPtr << std::endl;
    std::cout << "mem addr. of strRef: " << &strRef << std::endl << std::endl;

    std::cout << "value of str:    " << str << std::endl;
    std::cout << "value of strPtr: " << *strPtr << std::endl;
    std::cout << "value of strRef: " << strRef << std::endl;
    return (0);
}
