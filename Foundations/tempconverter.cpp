#include <iostream>

int main(){
    using namespace std;

    int choice;
    double celcius;
    double fahrenheit;
    bool finish = false;
    while (!finish)
    {
        cout << "Temperature Converter\n\n1. Convert Celcius to Fahrenheit\n2. Convert Fahrenheit to Celcius\n3. Exit\nPick a choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "Enter value: ";
            cin >> celcius;
            fahrenheit = (celcius * 9 / 5) + 32;
            cout << "Fahrenheit: " << fahrenheit << endl;
            break;
        case 2:
            fahrenheit;
            cout << "Enter value: ";
            cin >> fahrenheit;
            celcius = (fahrenheit - 32) * 5 / 9;
            cout << "Celcius: " << celcius << endl;
            break;
        default:
            finish = true;
            break;
        }
    }
    return 0;
}