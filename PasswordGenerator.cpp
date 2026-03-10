#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string characters =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789"
    "!@#$%^&*";

    int length;
    
    cout << "Enter password length: ";
    cin >> length;

    srand(time(0));

    cout << "Generated Password: ";

    for(int i = 0; i < length; i++){
        int randomIndex = rand() % characters.length();
        cout << characters[randomIndex];
    }

    cout << endl;
    cout << "Thank you for using the password generator!" << endl;

    return 0;
}