#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    std::cout << "Enter words (q to quit):\n";
    char words[20];
    int a = 0;
    int b = 0;
    int c = 0;
    while (std::cin >> words && strcmp(words, "q"))
    {
        if (isalpha(words[0]))
        {
            if (tolower(words[0]) == 'a' || tolower(words[0]) == 'e' || tolower(words[0]) == 'i' || tolower(words[0]) == 'o' || tolower(words[0]) == 'u') {
                a ++;
            } else {
                b ++;
            }
        } else {
            c ++;
        }
        
    }
    std::cout << a << " words beginning with vowels\n";
    std::cout << b << " words beginning with consonants\n";
    std::cout << c << " others\n";
}