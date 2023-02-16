#include <iostream>

struct bop {
    char fullname[30];
    char title[30];
    char bopname[30];
    int preference;
};

int main() {
    bop bops[] = {
        {
            "fullname",
            "title",
            "bopname",
            1
        }
    };
    std::cout << "Benevolent Order of Programmers Report\n"
        << "a. display by name\t" << "b. display by title\n"
        << "c. display by bopname\t" << "d. display by preference\n"
        << "q. quit" << std::endl;
    char ch;
    while (std::cin >> ch, ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            for (int i = 0; i < 1; i ++) {
                std::cout << bops[i].fullname << std::endl;
            }
            break;
        
        case 'b':
            for (int i = 0; i < 1; i ++) {
                std::cout << bops[i].title << std::endl;
            }
            break;
        
        case 'c':
            for (int i = 0; i < 1; i ++) {
                std::cout << bops[i].bopname << std::endl;
            }
            break;
        
        case 'd':
            for (int i = 0; i < 1; i ++) {
                switch (bops[i].preference)
                {
                case 0:
                    std::cout << bops[i].fullname << std::endl;
                    break;
                
                case 1:
                    std::cout << bops[i].title << std::endl;
                    break;
                
                case 2:
                    std::cout << bops[i].bopname << std::endl;
                    break;
                
                default:
                    break;
                }
            }
            break;
        
        default:
            break;
        }
        std::cout << "Next choice: ";
    }
    
}