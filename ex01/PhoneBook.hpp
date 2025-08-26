#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook {
    Contact obj[8];
    int index;
    
public:
    PhoneBook() : index(0) {};

    void get();  
    void add();
    void search();
    void Display();
    void lookFor();
    int checkNumber(std::string name);

    void incIndex();
    int getIndex();
    std::string formatField(const std::string str);
};

#endif
