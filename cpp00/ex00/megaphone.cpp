#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    int i;
    int x;

    i = 1;
    if(argc > 1)
    {
    while(argv[i])
    {
        x = 0;
        while(argv[i][x])
        {
            if(!isupper(argv[i][x]))
                argv[i][x] -= 32;
            x++;
        }
        std::cout << argv[i];
        i++;
    }
    std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
