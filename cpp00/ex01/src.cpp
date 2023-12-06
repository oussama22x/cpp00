#include "PhoneBook.hpp"
#include <cstdio>
bool iswhitespace(std::string str)
{
    size_t i;
    size_t x;
    bool b;

    b = 0;
    x = 0;
    for(i = 0; i  < str.length(); i++)
    {
        if(!std::isprint(str[i]))
        {
            x++;
        }
        else
        {
            printf("yes it is valid %d\n", str[i]);
            b = 1;
        }
    }
    if(x == str.length())
        return(1);
    return(0);
}
void contacts::getname() 
{
    std::cout << "Enter name: ";
    if (!std::getline(std::cin, name)) {
        std::cout << "\nExiting program.\n";
        exit(0);
    }
    while(name.empty() || iswhitespace(name))
    {
            std::cout << "\033[31m"<<"can't be empty\n" << "\033[0m";
            std::cout << "Enter name: ";
            if (!std::getline(std::cin, name))
            {
            std::cout << "\nExiting program.\n";
            exit(0);
        }
    }
}

void contacts::getnickname() 
{
    std::cout << "Enter nickname: ";
    if (!std::getline(std::cin, nickname)) {
        std::cout << "\n unexpected input Exiting program.\n";
        exit(0);
        }
        while(nickname.empty() || iswhitespace(nickname))
        {
            std::cout << "\033[31m"<<"can't be empty\n" << "\033[0m";
            std::cout << "Enter nickname: ";
             if (!std::getline(std::cin, nickname)) {
            std::cout << "\nExiting program.\n";
            exit(0);
            }
        }
}

void contacts::getphone() {
    std::cout << "Enter phone: ";
        if (!std::getline(std::cin, phone)) {
            std::cout << "\nExiting program.\n";
            exit(0);
        }
        while(phone.empty() || iswhitespace(phone))
        {
            std::cout << "\033[31m"<<"can't be empty\n" << "\033[0m";
            std::cout << "Enter phone: ";
             if (!std::getline(std::cin, phone)){
            std::cout << "\nExiting program.\n";
            exit(0);
        }
        }
}

void contacts::getdarkest_secrect() {
    std::cout << "Enter darkest secret: ";
    if (!std::getline(std::cin, darkest_secret)) {
        std::cout << "\nExiting program.\n";
        exit(0);
    }
    while(darkest_secret.empty() || iswhitespace(darkest_secret)){
        std::cout << "\033[31m"<<"can't be empty\n" << "\033[0m";
        std::cout << "Enter darkest secret: ";
            if (!std::getline(std::cin, darkest_secret)) {
        std::cout << "\nExiting program.\n";
        exit(0);
        }
    }
}

void contacts::get_lastname()
{
    std::cout << "Enter last name: ";
    if (!std::getline(std::cin, last_name)) {
        std::cout << "\nExiting program.\n";
        exit(0);
    }
    while(last_name.empty() || iswhitespace(last_name))
    {
        std::cout << "\033[31m"<<"can't be empty\n" << "\033[0m";
        std::cout << "Enter last name: ";
        if (!std::getline(std::cin, last_name)) {
            std::cout << "\nExiting program.\n";
            exit(0);
        }
    }
}

std::string contacts::cut(std::string str)
{
    std::string new_str;
    if(str.length() > 10)
    {
        new_str = str.substr(0, 10);
        new_str.append(".");
        return (new_str);
    }
        return(str);
}

void contacts::call_all()
{
    getname();
    get_lastname();
    getnickname();
    getphone();
    getdarkest_secrect();
    std::cout << "\033[36m" <<"\ncontact was successfully saved 👏\n\n" << "\033[0m";
}