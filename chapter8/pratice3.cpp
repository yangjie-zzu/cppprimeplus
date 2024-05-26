#include <iostream>
#include <string.h>

void toupper(char * const & str);

int main() {
    char str[20];
    while (true)
    {
        std::cout << "Enter a string (q to quit):";
        std::cin.getline(str, 20);
        if (strcmp(str, "q") == 0) {
            break;
        }
        toupper(str);
        std::cout << str << std::endl;
    }
    std::cout << "Bye.";
    
}

void toupper(char * const & str) {
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = toupper(str[i]);
        i ++;
    }
}