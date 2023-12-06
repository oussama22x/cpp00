#include "PhoneBook.hpp"
 void phonebook::addconatct()
{
    if(numcontact < 8)
    {
    cont[numcontact].call_all();
    numcontact++;
    }
    else if (numcontact == 8)//REPLACE THE OL
    {
        cont[0].call_all();
    }
}

void phonebook::case_of_empty()
{
    if(numcontact == 0)
    {
        std::cout << "\033[1m" << "empty phonebook!\n" << "\033[0m";
        std::cout <<" ___________________________________________\n";
        std::cout <<"|      index|first name| last name| Nickname|\n";
        std::cout <<" ------------------------------------------- \n";
    }
}

std::string phonebook::remove_spaces(std::string index)
{
    std::string new1;

    for (size_t i = 0; i < index.length(); i++)
    {
        if (!std::isspace(index[i]))
            new1 += index[i];
    }
    index = new1;
    return(index);
}

void phonebook::display_conact(int index)
{
    std::cout << "name: " << cont[index].name_return() << std::endl;
    std::cout << "last name: " << cont[index].last_name_return() << std::endl;
    std::cout << "nickname: " << cont[index].nickname_return() << std::endl;
    std::cout << "phone number: " << cont[index].phone_return() << std::endl;;
    std::cout << "darkest secret: " << cont[index].darkest_secret_return() << std::endl;
}

void phonebook::veiw_contact()
{
 int i;
 int index;
 
 std::string in;
 case_of_empty();
 if(numcontact)
 {
     std::cout <<" _______________________________________________\n";
     std::cout <<"|" << std::setw(11) << "index" << "|" << std::setw(11) << "name" << "|";
     std::cout << std::setw(11) << "last name" << "|" << std::setw(11) << "nickname" << "|\n";
     std::cout <<"-------------------------------------------------\n";
     for(i = 0; i < numcontact; i++)
     {
        std::cout <<"|" << std::setw(11) << i << "|" << std::setw(11) << cont[i].cut(cont[i].name_return()) << "|";
        std::cout << std::setw(11) << cont[i].cut(cont[i].last_name_return()) << "|" << std::setw(11) << cont[i].cut(cont[i].nickname_return()) << "|";
        std::cout << "\n";
     }
     std::cout <<"-------------------------------------------------\n";
     std::cout << "please enter index...";
     std::getline(std::cin, in);
     in = remove_spaces(in);
     index = atoi(in.c_str());
     if(in.length() > 1 || in.length() < 1 || index < 0  || index >= numcontact || !isdigit(in[0]))
        std::cout << "\ninvalid index or contact does not exist\n";
     else
        display_conact(index);
 }
}

std::string contacts::name_return()
{
    return (name);
}

std::string contacts::last_name_return()
{
    return(last_name);
}

std::string contacts::nickname_return()
{
    return (nickname);
}

std::string contacts::phone_return()
{
    return(phone);
}

std::string contacts::darkest_secret_return()
{
    return darkest_secret;
}