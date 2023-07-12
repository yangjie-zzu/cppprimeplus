#include <iostream>
#include <string>

const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct arryObj
{
    double array[Seasons];
};


void fill(arryObj * pa);

void show(arryObj da);

int main() {
    arryObj expenses;
    fill(&expenses);
    show(expenses);
}

void fill(arryObj * pa) {
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (pa -> array[i]);
    }
}

void show(arryObj da) {
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da.array[i] << endl;
        total += da.array[i];
    }
    cout << "Total Expenses: $" << total << endl;
    
}