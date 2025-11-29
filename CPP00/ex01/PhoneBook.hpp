#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

class PhoneBook
{
    private:
        Contact contacts[8];
        int countcontact;
    public:
        PhoneBook();
        void  search();
        void add();
        void exit();
};

#endif
