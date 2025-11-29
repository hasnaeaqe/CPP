#include "Contact.hpp"


const std::string& Contact::getFirstname() const
{
    return firstname;
}

const std::string& Contact::getLastname() const
{
    return lastname;
}
const std::string& Contact::getNickname() const
{
    return nickname;
}
const std::string& Contact::getPhonenumber() const
{
    return phonenumber;
}
const std::string& Contact::getDarkestSecret() const
{
    return darkestsecret;
}


void Contact::setFirstname(const std::string& firstname)
{
    this->firstname=firstname;
}
void Contact::setLastname(const std::string& lastname)
{
    this->lastname=lastname;
}
void Contact::setNickname(const std::string& nickname)
{
    this->nickname=nickname;
}
void Contact::setPhonenumber(const std::string& phonenumber)
{
    this->phonenumber=phonenumber;
}
void Contact::setDarkestSecret(const std::string& darkestsecret)
{
    this->darkestsecret=darkestsecret;
}