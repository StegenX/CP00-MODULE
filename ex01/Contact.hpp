#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    std::string First_Name;
    std::string Last_Name;
    std::string Nickname;
    std::string phone_number;
    std::string darkest_secret;

    public : 
        std::string get_First_Name( void );
        std::string get_Last_Name( void );
        std::string get_NickName( void );
        std::string get_phone_number( void );
        std::string get_darkest_secret( void );

        void set_First_Name(const std::string First_Name);
        void set_Last_Name(const std::string LastName);
        void set_NickName(const std::string NickName);
        void set_phone_number(const std::string phoneNumber);
        void set_darkest_secret(const std::string darkest_secret);
};

#endif