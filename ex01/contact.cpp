#include "contact.hpp"

Contact::Contact() {
    std::cout << "This is the constructor" << std::endl;
    firstName = "";
    lastName = "";
    nickname = "";
    login = "";
    postalAddress = "";
    emailAddress = "";
    phoneNumber = "";
    birthDate = "";
    favouriteMeal = "";
    underwearColour = "";
    darkestSecret = "";
}

void Contact::addContact(std::string firstName, std::string lastName, std::string nickname, std::string login,
std::string postalAddress, std::string emailAddress, std::string phoneNumber, std::string birthDate, std::string favouriteMeal,
std::string underwearColour, std::string darkestSecret) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->login = login;
    this->postalAddress = postalAddress;
    this->emailAddress = emailAddress;
    this->phoneNumber = phoneNumber;
    this->birthDate = birthDate;
    this->favouriteMeal = favouriteMeal;
    this->underwearColour = underwearColour;
    this->darkestSecret = darkestSecret;
    std::cout << "whaiat" << this->firstName << std::endl; 
}

void Contact::getName() {
    std::cout << "This name is first : " << this->firstName << std::endl;
}

void Contact::getDetails() {
    std::cout << "First Name: \t\t" << this->firstName << std::endl;
    std::cout << "Last Name: \t\t" << this->lastName << std::endl;
    std::cout << "Nickname: \t\t" << this->nickname << std::endl;
    std::cout << "Login: \t\t\t" << this->login << std::endl;
    std::cout << "Postal Address: \t" << this->postalAddress << std::endl;
    std::cout << "Email Address: \t\t" << this->emailAddress << std::endl;
    std::cout << "Phone Number: \t\t" << this->phoneNumber << std::endl;
    std::cout << "Birth Date: \t\t" << this->birthDate << std::endl;
    std::cout << "Favourite Meal: \t" << this->favouriteMeal << std::endl;
    std::cout << "Underwear Colour: \t" << this->underwearColour << std::endl;
    std::cout << "Darkest Secret: \t" << this->darkestSecret << std::endl;
}