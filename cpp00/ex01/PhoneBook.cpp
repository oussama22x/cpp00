#include "PhoneBook.hpp"
void print()
{
    std::cout << "\033[32m" << "|'ADD':    save a new contact '📝'\t|\n" << "\033[0m";
    std::cout << "\033[32m" << "|'SEARCH': display a specific contact '🔍'|\n" << "\033[0m";
    std::cout << "\033[32m" << "|'EXIT':   exit the phonebook conatacts '👋 ✖️ |'\n\n" << "\033[0m";
}
int main()
{
    std::cout << "\033[31m" << "welcome to phonebook '📞📖' :\n\n" << "\033[0m" ; //main message.
    phonebook contact;
    std::string command;
    print();
    command = "START";
    while(1)
    {
        std::cout << "\033[35m" <<"pleas enter a command '☎':... " << "\033[0m";
        if(!std::getline(std::cin, command))
        {
            std::cout << "\nERROR: 'end of file' end program\n";
            return(0);
        }

       if(command.empty())
            std::cout << "you enterd nothing \n";
       else if(command == "ADD")
            contact.addconatct();
       else if(command == "EXIT")
        {
            std::cout << "Have A Nice Day 🫡\n";
            return (1);
        }
       else if(command == "SEARCH")
            contact.veiw_contact();
       else
        {
            std::cout <<  "\033[31m" <<"unvalid command '🙆‍♂️' :\n\n" <<  "\033[0m";
            print();
        }
    }
    std::cout << "Have A Nice Day 🫡\n";
}