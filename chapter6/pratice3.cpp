#include <iostream>

int main()
{
    std::cout << "Please enter one of the flowing choices:\n";
    std::cout << "c) carnivore\t"
              << "p) pianist\n";
    std::cout << "t) tree\t"
              << "g) game" << std::endl;
    char ch;
    while (std::cin >> ch, ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
    {
        std::cout << "Please enter a c, p, t, or g: ";
    }

    switch (ch)
    {
    case 'c':
        std::cout << "A maple is a carnivore." << std::endl;
        break;
    case 'p':
        std::cout << "A maple is a pianist." << std::endl;
        break;
    case 't':
        std::cout << "A maple is a tree." << std::endl;
        break;
    case 'g':
        std::cout << "A maple is a game." << std::endl;
        break;
    default:
        break;
    }
}