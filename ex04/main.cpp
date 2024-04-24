#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
    // checks argc is correct
    if (argc != 4)
    {
        std::cerr << "Error\nInvalid input" << std::endl;
        std::cout << "Usage: " << argv[0] << "<filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    // init variables
    std::string infileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string outfileName = infileName;

    outfileName.append(".replace");
    // checks that strings are valid
    if (s1.empty() || s2.empty())
    {
        std::cerr << "Error\nEmpty strings" << std::endl;
        return 1;
    }
    if (s1 == s2)
    {
        std::cerr << "Error\nStrings are the same" << std::endl;
        return 1;
    }

    // init in file
    // ifstream is an object that reads from a file
    std::ifstream infile(infileName.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error\nCould not open " << infileName << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << infile.rdbuf();
    if (!buffer)
    {
        std::cout << "Error\n" << infileName << " is empty" << std::endl;
        return 1;
    }
    // fills buffer with infile's content
    // .str() returns a copy of the content of buffer
    std::string content = buffer.str();
    infile.close();

    // replace s1 with s2
    std::size_t pos = content.find(s1);
    // return the position of the first occurence
    // std::cout << pos << std::endl;
    while (pos != std::string::npos && pos < content.length())
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
        pos = content.find(s1, pos);
    }
    std::ofstream outfile(outfileName.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error\nCould not open " << outfileName << std::endl;
        return 1;
    }
    outfile << content;
    outfile.close();;
    return 0;
}
