#include <iostream>

int main()
{
    using namespace std;
    long long word_population;
    long long us_population;
    cout << "Enter the world's population: ";
    cin >> word_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    cout << "The population of the US is " << us_population * 100.0 / word_population << "% of the world population.";
    return 0;
}