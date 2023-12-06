#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include <cctype>
class contacts {
private:
    std::string name;
    std::string last_name;
    std::string nickname;
    std::string phone;
    std::string darkest_secret;

public:
    void getname(); 
    void getnickname();
    void getphone(); 
    void getdarkest_secrect(); 
    void get_lastname();
    void call_all();
    std::string cut(std::string str);
    std::string name_return();
    std::string last_name_return();
    std::string nickname_return();
    std::string phone_return();
    std::string darkest_secret_return();
};
class phonebook {
private:
    contacts cont[8];
    int numcontact;
public:
    phonebook() : numcontact(0){}
    void addconatct();
    void case_of_empty();
    std::string remove_spaces(std::string index);
    void display_conact(int index);
    void veiw_contact();

};
#endif

//implement  logic  to check for valid arguments

