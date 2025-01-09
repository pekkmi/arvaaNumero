#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game() {
    srand(time(0));

    int rNumber = rand() % 21;

    cout << "Welcome to incredible guessin game" << endl;

    cout << "I just thought of a number between 0 and 20. Try out and guess the number!" << endl;

    int numberOfGuesses = 0;
    bool commentShown5 = false, commentShown10 = false, commentShown15 = false;

    while (true) {
        int guess;


        cout << "Enter your guess: ";
        cin >> guess;
        cout << endl;

        if (guess < 0 || guess > 20) {
            cout << "Invalid input. Please choose a number between 0 and 20" << endl;
            numberOfGuesses++;
            continue;
        }

        numberOfGuesses++;

        if (numberOfGuesses == 5 && !commentShown5) {
            cout << "Come on! You don't even try!" << endl;
            commentShown5 = true; // Mark this comment as shown
        } else if (numberOfGuesses == 10 && !commentShown10) {
            cout << "You got to be kidding me!" << endl;
            commentShown10 = true; // Mark this comment as shown
        } else if (numberOfGuesses == 15 && !commentShown15) {
            cout << "You really suck you know!" << endl;
            commentShown15 = true; // Mark this comment as shown
        }

        if (guess == rNumber) {
            cout << "Gz!!! The number was correct! You deserve to be treated like a god!" << endl;
            cout << numberOfGuesses;
            break;
        }else {
            cout << "Nope! You are not correct! Please try again!" << endl;

        }


    }
    return 0;
}

int main()
{
    game();

}
