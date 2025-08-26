#include "PhoneBook.hpp"
#include <limits>

void PhoneBook::incIndex() {
    index++;
    if (index >= 8) index = 0;
}

std::string PhoneBook::formatField(const std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

int PhoneBook::getIndex() {
    return index;
}

int PhoneBook::checkNumber(std::string name)
{
    int i = 0;
 
    while (name[i])
    {
        if (!isdigit(name[i]))
            return 0;
        i++;
    }  
    return 1;
}

void PhoneBook::Display() {
    std::cout << std::setw(10) << "Index" << "|"
    << std::setw(10) << "First Name" << "|"
    << std::setw(10) << "Last Name"  << "|"
    << std::setw(10) << "Nickname"   << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << std::setw(10) << i << "|"
        << std::setw(10) << formatField(obj[i].get_First_Name()) << "|"
        << std::setw(10) << formatField(obj[i].get_Last_Name())  << "|"
        << std::setw(10) << formatField(obj[i].get_NickName())
         << std::endl;
    }
}


void PhoneBook::lookFor() {
    int Index;
    std::string input;
    
    while (true)
    {
        std::cout << "Choose Index : ";
        if (!getline(std::cin, input))
            exit(EXIT_SUCCESS);
        
        std::stringstream(input) >> Index;

        if (checkNumber(input) && Index >= 0 && Index < 8) {
            std::cout << "First Name : "
                << obj[Index].get_First_Name() << std::endl;

            std::cout << "Last Name : " 
                << obj[Index].get_Last_Name() << std::endl;

            std::cout << "Nickname : " 
                << obj[Index].get_NickName() << std::endl;

            std::cout << "Phone Number : " 
                << obj[Index].get_phone_number() << std::endl;

            std::cout << "Darkest Secret : " 
                << obj[Index].get_darkest_secret() << std::endl;
            break ;
    
        } else { std::cout << "Invalid index!" << std::endl; }
    }
}

void PhoneBook::add() {
    std::string name;

    std::cout << "First Name: ";
    if(!getline(std::cin, name))
        exit(0) ;
    obj[index].set_First_Name(name);

    std::cout << "Last Name: ";
    if(!getline(std::cin, name))
        exit(0) ;
    obj[index].set_Last_Name(name);

    std::cout << "Nickname: ";
    if(!getline(std::cin, name))
        exit(0) ;
    obj[index].set_NickName(name);
    
    std::cout << "Phone Number: ";
    if(!getline(std::cin, name))
        exit(0) ;
    while (1)
    {
        if (checkNumber(name))
        {
            obj[index].set_phone_number(name);
            break ;
        }
        std::cout << "Enter a valid number : ";
        if(!getline(std::cin, name))
            exit(0) ;
    }

    std::cout << "Darkest Secret: ";
    if(!getline(std::cin, name))
        exit(0) ;
    obj[index].set_darkest_secret(name);

    incIndex();
}

void PhoneBook::search() {
    Display();
    lookFor();
}

void PhoneBook::get() {
    std::string command;
    std::cout << "Welcome To PhoneBook, Choose A Command : ";

    while (getline(std::cin, command)) {

        if (command == "ADD") 
            add();
        else if (command == "SEARCH") 
            search();
        else if (command == "EXIT") 
            return;
        else 
            std::cout << "Invalid command!" << std::endl;

        std::cout << "Choose A Command : ";
    }
}
