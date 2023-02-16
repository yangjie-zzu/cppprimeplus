#include<fstream>
#include<iostream>

int main() {
    std::ifstream file;
    file.open("pratice8.cpp");
    if (!file.is_open()) {
        exit(EXIT_FAILURE);
    }
    int count = 0;
    while (file.get(), !file.eof())
    {
        count ++;
    }
    std::cout << count << std::endl;
    
}