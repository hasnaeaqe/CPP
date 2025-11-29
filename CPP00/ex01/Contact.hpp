#ifndef CONTACT_HPP
#define  CONTACT_HPP

#include <string>


class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;

    public:
        const std::string& getFirstname() const;
        const std::string& getLastname() const;
        const std::string& getNickname() const;
        const std::string& getPhonenumber() const;
        const std::string& getDarkestSecret() const;

       void setFirstname(const std::string& firstname);
       void setLastname(const std::string& lastname);
       void setNickname(const std::string& nickname);
       void setPhonenumber(const std::string& phonenumber);
       void setDarkestSecret(const std::string& darkestsecret);
};

#endif