#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <limits>  

using namespace std; 

int main() {

    srand(time(0));

    // Generate a random number between 1 and 100 (inclusive)
    const int secretNumber = (rand() % 100) + 1;

    int guess = 0;
    int guessCount = 0;
    
   
    cout << "------------------------------------------" << endl;
    cout << "        C++ Number Guessing Game          " << endl;
    cout << "------------------------------------------" << endl;
    cout << "I have chosen a secret number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;
    cout << "------------------------------------------" << endl;

 
    while (guess != secretNumber) {
        cout << "\nEnter your guess: ";
        
        // Check if the input is a valid integer
        if (!(cin >> guess)) {
            cout << "That's not a valid number! Please try again." << endl;
            clearInput();
            continue; // Skip the rest of the loop and ask for input again
        }

       
        guessCount++;

       
        if (guess < 1 || guess > 100) {
           
            cout << "Your guess is out of range (1-100). Try to stay within the limits!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Aim higher." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try lower." << endl;
        }
    }

    // Game end message
    cout << "\n==========================================" << endl;
    cout << "CONGRATULATIONS! You guessed the number!" << endl;
    cout << "The secret number was " << secretNumber << "." << endl;
    cout << "You took " << guessCount << " guesses to find it." << endl;
    cout << "==========================================" << endl;

    return 0;
}
