#include <iostream> 

std::string Toupper(std::string name)
{
    int i = 0;
    for (i = 0; name[i];i++)
    {
        name[i] = toupper(name[i]);
    }
    return name;
}



int main (int ac, char **av)
{
    int i = 1;
    if (ac == 1)
        return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 1;
    for (i = 1; av[i]; i++)
        std::cout << Toupper(av[i]);
    std::cout << "\n";
 }
