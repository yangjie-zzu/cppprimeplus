#include <iostream>
const int MAX = 5;

double * fill_array(double ar[], int limit);
void show_array(const double ar[], double * begin, double * end);
void revalue(double r, double ar[], double * begin, double * end);

int main() {
    using namespace std;
    double properties[MAX];
    double * max = fill_array(properties, MAX);
    show_array(properties, properties, max);
    if (max > properties) {
        cout << "Enter revaluation factor: ";
        double factory;
        while (!(cin >> factory))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; Please enter a number";
        }
        revalue(factory, properties, properties, max);
        show_array(properties, properties, max);
        
    }
    cout << "Done.\n";
    cin.get();
    // cin.get();
    return 0;
}

double * fill_array(double ar[], int limit) {
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i ++) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; input process terminated.\n";
            break;
        }
        if (temp < 0) {
            break;
        }
        ar[i] = temp;
    }
    return ar + i;
}

void show_array(const double ar[], double * begin, double * end) {
    using namespace std;
    for (int i = 0; i < (end - begin); i ++) {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], double * begin, double * end) {
    for (int i = 0; i < (end - begin); i++)
    {
        ar[i] *= r;
    }
    
}