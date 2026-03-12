#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    cout << "=== UNIT CONVERTER ===\n";
    cout << "1. Kilometer to Meter\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "3. Kilogram to Gram\n";
    cout << "Choose: ";
    cin >> choice;

    if(choice == 1){
        cout << "Enter kilometers: ";
        cin >> value;
        cout << "Meters: " << value * 1000;
    }
    else if(choice == 2){
        cout << "Enter Celsius: ";
        cin >> value;
        cout << "Fahrenheit: " << (value * 9/5) + 32;
    }
    else if(choice == 3){
        cout << "Enter Kilograms: ";
        cin >> value;
        cout << "Grams: " << value * 1000;
    }
}