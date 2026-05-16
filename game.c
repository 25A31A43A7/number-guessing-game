#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    string name;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Welcome " << name << " to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > number)
            cout << "Too high!" << endl;
        else if (guess < number)
            cout << "Too low!" << endl;
        else
            cout << "Correct! Attempts: " << attempts << endl;

    } while (guess != number);

    return 0;
}
