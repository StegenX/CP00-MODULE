#include "Contact.hpp"

std::string Contact::get_First_Name( void ) { return First_Name; }

std::string Contact::get_Last_Name( void ) { return Last_Name; }

std::string Contact::get_NickName( void ) { return Nickname; }

std::string Contact::get_phone_number( void ) { return phone_number; }

std::string Contact::get_darkest_secret( void ) { return darkest_secret; }

void Contact::set_First_Name(std::string FirstName) 
{ 
    Contact::First_Name = FirstName;
}


void Contact::set_Last_Name(std::string LastName)
{  
    Contact::Last_Name = LastName;
}

void Contact::set_NickName(std::string NickName)
{
    Contact::Nickname = NickName;
}

void Contact::set_phone_number(std::string phoneNumber)
{
    Contact::phone_number = phoneNumber;
}

void Contact::set_darkest_secret(std::string darkestSecret)
{
    Contact::darkest_secret = darkestSecret;
}