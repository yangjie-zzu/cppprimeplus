#include <iostream>
const int ArSize = 10;

void strcount(std::string str);

int main() {
    using namespace std;
    std::string input;
    cout << "Enter a line:\n";
    std::getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        std::getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(std::string str) {
    using namespace std;
    static int total = 0;
    int count = str.size();
    cout << "\"" << str << "\" contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}