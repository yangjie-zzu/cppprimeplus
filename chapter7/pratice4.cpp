#include <iostream>
long double probability(unsigned numbers, unsigned picks);

int main() {
    using namespace std;
    double total, choices, special_total, special_choices;
    cout << "Enter the total number of choices and the special number of choices on the game card and\n"
            "the number of picks allowed.\n";
    while (cin >> total >> choices >> special_total >> special_choices && choices <= total && special_choices <= special_total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices) * probability(special_total, special_choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n --, p --)
    {
        result = result * n/p;
    }
    return result;
}