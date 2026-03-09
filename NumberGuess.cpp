#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int secretNumber, guess;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

   cout << "==================================" << endl;
   cout << "      Number Guessing Game        " << endl;
   cout << "      Console Logic Challenge     " << endl;
   cout << "==================================" << endl;

    cout << "\nGuess the number between 1 - 100" << endl;
    cout << "Let's see if your logic is sharp today.\n" << endl;

    while(true){
        cout << "Your guess: ";
        cin >> guess;

        if(guess > secretNumber){
            cout << "Too high. Think lower.\n" << endl;
        }
        else if(guess < secretNumber){
            cout << "Too low. Think higher.\n" << endl;
        }
        else{
            cout << "\nCorrect! You found the number." << endl;
            cout << "Good intuition.\n" << endl;
            break;
        }
    }

    cout << "Thanks for playing." << endl;
    cout << "See you in the next experiment.\n" << endl;

    return 0;
}
