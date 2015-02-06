#include <iostream.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int game, guess, answer;

    srand (time(NULL));

    answer = rand() % 10 + 1;

    cout << "Do you want to play a game? (1 for yes, 2 for no) ";
    cin >> game;
    if (game == 1) {
        cout << "Let's play a game then, shall we?";
            do {
                cout << "\nI'm thinking of an integer between 1 through 10. What is it?\n";
                cin >> guess;
                if (guess == answer) {
                    cout << "You are correct! 25 gold for you!\n";
                    cout << "I'm done playing today, come back tomorrow!\n";
                    return 0;
                }
                else if (guess != answer) {
                    cout << "That's not the integer I was thinking of...\nTry again!\n";
                }
            } while (guess!=answer);
    }
    else if (game == 2) {
        cout << "That's no fun...";
        return 0;
    }
}