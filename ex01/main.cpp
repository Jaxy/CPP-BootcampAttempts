#include "contact.hpp"

void printMenu() {
    std::cout << "1. \tADD" << std::endl; 
    std::cout << "2. \tSEARCH" << std::endl; 
    std::cout << "3. \tEXIT" << std::endl; 
}

void processContact(Contact contact) {
    std::cout << "Enter First Name: " << std::endl;
    std::string firstName;
    getline(std::cin, firstName);
    std::cout << "Enter Last Name: " << std::endl;
    std::string lastName;
    getline(std::cin, lastName);
    std::cout << "Enter Nickname: " << std::endl;
    std::string nickname;
    getline(std::cin, nickname);
    std::cout << "Enter Login: " << std::endl;
    std::string login;
    getline(std::cin, login);
    std::cout << "Enter Postal Address: " << std::endl;
    std::string postalAddress;
    getline(std::cin, postalAddress);
    std::cout << "Enter Email Address: " << std::endl;
    std::string emailAddress;
    getline(std::cin, emailAddress);
    std::cout << "Enter Phone Number: " << std::endl;
    std::string phoneNumber;
    getline(std::cin, phoneNumber);
    std::cout << "Enter Birth Date: " << std::endl;
    std::string birthDate;
    getline(std::cin, birthDate);
    std::cout << "Enter Favourite Meal: " << std::endl;
    std::string favouriteMeal;
    getline(std::cin, favouriteMeal);
    std::cout << "Enter Underwear Colour: " << std::endl;
    std::string underwearColour;
    getline(std::cin, underwearColour);
    std::cout << "Enter Darkest Secret: " << std::endl;
    std::string darkestSecret;
    getline(std::cin, darkestSecret);
    contact.addContact(firstName, lastName, nickname, login, postalAddress, emailAddress,
    phoneNumber, birthDate, favouriteMeal, underwearColour, darkestSecret);
    contact.getName();
}

void processChoice() {
    /* CHAR VERSION */
    std::string choice = "";
    do {
        getline(std::cin, choice);
        switch(choice[0]) {
            case '1' :
                std::cout << "First!" << std::endl; 
                break;
            case '2' :
                std::cout << "Second!" << std::endl;
                break;
            case '3' :
                std::cout << "Third" << std::endl;
                break;
            default :
                std::cout << "Invalid selection" << std::endl;
        }
        std::cout << "Your selection is: " << choice << std::endl;
    } while (choice[0] != '3');

    /* INT VERSION */
    // int choice = 1;
    // do {
    //     if (choice < 1 || choice > 3 || std::cin.fail()) {
    //         std::cout << "Incorrect selection. Enter your choice (1 - 3): " << std::endl;
    //         std::cin.clear();
    //         std::cin.ignore();
    //     }
    //     else {
    //         std::cout << "Enter your choice (1 - 3): " << std::endl;
    //     }
    //     std::cin >> choice;
    // } while (choice != 3);
}

int main() {
    Contact contact[8];
    int index = 0;
    // printMenu();
    // processChoice();
    // contact[index].addContact("hello");
    processContact(contact[index]);
    contact[index].getName();
    return 0;
}