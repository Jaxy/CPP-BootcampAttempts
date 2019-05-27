#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iostream>
#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    std::string phoneNumber;
    std::string birthDate;
    std::string favouriteMeal;
    std::string underwearColour;
    std::string darkestSecret;
public:
    Contact();
    void addContact(std::string firstName, std::string lastName, std::string nickname, std::string login,
    std::string postalAddress, std::string emailAddress, std::string phoneNumber, std::string birthDate, std::string favouriteMeal,
    std::string underwearColour, std::string darkestSecret);
    void getDetails();
    void getName();
};

#endif