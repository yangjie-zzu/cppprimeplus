#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string first_name;
    string last_name;
    char deserve;
    short age;
    cout << "What is your first name? ";
    getline(cin, first_name);
    cout << "What is your last name? ";
    getline(cin, last_name);
    cout << "What letter grade do you deserve? ";
    cin >> deserve;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: ";
    cout.put(deserve + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}