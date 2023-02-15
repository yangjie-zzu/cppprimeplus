#include <iostream>
#include <cctype>

int main()
{
    char ch;
    while ((ch = std::cin.get()) != '@')
    {
        if (!isdigit(ch))
        {
            if (islower(ch))
            {
                std::cout << (char) toupper(ch);
            }
            else if (isupper(ch))
            {
                std::cout << (char) tolower(ch);
            }
            else
            {
                std::cout << ch;
            }
        }
    }
}