#include "contact.hpp"

void printMenu() {
    std::cout << "1. \tADD" << std::endl; 
    std::cout << "2. \tSEARCH" << std::endl; 
    std::cout << "3. \tEXIT" << std::endl; 
}

void printContacts(Contact *contact, int count) {
    std::cout << std::right << std::setw(10) << "Index" << "|" << std::flush;
    std::cout << std::right << std::setw(10) << "First Name" << "|" << std::flush;
    std::cout << std::right << std::setw(10) << "Last Name" << "|" << std::flush;
    std::cout << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
    int index = 0;
    while (count) {
        std::cout << std::right << std::setw(10) << index << "|" << std::flush;
        contact[index].searchDisplay();
        count--;
        index++;
    }
}

void processContact(Contact *contact, int &count) {
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
    contact->addContact(firstName, lastName, nickname, login, postalAddress, emailAddress,
    phoneNumber, birthDate, favouriteMeal, underwearColour, darkestSecret);
    count++;
}

void processSearch(Contact *contact, int count) {
    if (count > 0) {
        std::cout << "Enter Index for desired contact: " << std::endl;
        int index;
        std::cin >> index;
        std::cin.clear();
        std::cin.ignore();
        if (index >= 0 && index < count) {
            std::cout << "Your choice was " << index << std::endl;
            contact[index].contactDisplay();
        } else {
            std::cout << "Invalid Index value." << std::endl;
        }
    } else {
        std::cout << "Phonebook is empty." << std::endl;
    }
}

void processChoice() {
    Contact contact[8];
    int count = 0;
    /* CHAR VERSION */
    std::string choice = "";
    do {
        printMenu();
        getline(std::cin, choice);
        switch(choice[0]) {
            case '1' :
                std::cout << "\x1b[32mAdding new Contact\x1b[0m" << std::endl;
                processContact(&contact[count], count);
                std::cout << "count : " << count << std::endl;
                break;
            case '2' :
                std::cout << "\x1b[32mSearching for Contact\x1b[0m" << std::endl;
                printContacts(contact, count);
                processSearch(contact, count);
                break;
            case '3' :
                std::cout << "\x1b[31mExiting Program\x1b[0m" << std::endl;
                break;
            default :
                std::cout << "Invalid Selection" << std::endl;
                break;
        }
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
    processChoice();
    return 0;
}