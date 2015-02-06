#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main ()

{
    //cool kids prepare the randomizer with the below function
    srand (time(NULL));

    //cool kids use random variable names
    int q, x, z;
    int not_result;
    int answer;

    //cool kids set their variables to random integers
    q = rand() % 20 + 1;
    x = rand() % 5 + 1;
    z = rand() % 15 + 1;

    //cool kids write their processes in Comic Sans MS
    not_result = q + x - z;

    //cool kids use cout and return because they are just that cool
    cout << "What is the answer to " << q ++ << " + " << x -- << " - " << z << "?\n";

    //cool kids use do while loops and cin to obtain information and run it in the spin cycle
    do {
        cin >> answer;
        if (answer == not_result) {
            cout << "That is correct.\n";
            return 0;
        }
        else {
            cout << "That is not correct.\n";
        }
    } while (answer != not_result);
}
