#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int choice;
    string item;
    int amount;

    cout << "=== Expense Tracker ===" << endl;
    cout << "1. Add Expense" << endl;
    cout << "2. View Expenses" << endl;
    cout << "Choose: ";
    cin >> choice;

    if(choice == 1){

        cout << "Item name: ";
        cin >> item;

        cout << "Amount: ";
        cin >> amount;

        ofstream file("expenses.txt", ios::app);
        file << item << " " << amount << endl;
        file.close();

        cout << "Expense saved!" << endl;
    }

    else if(choice == 2){

        ifstream file("expenses.txt");
        string item;
        int amount;
        int total = 0;

        cout << "\nExpense List:\n";

        while(file >> item >> amount){
            cout << item << " - " << amount << endl;
            total += amount;
        }

        cout << "\nTotal spending: " << total << endl;

        file.close();
    }

    return 0;
}