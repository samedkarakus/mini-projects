#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int Guess, Secret;
    srand (time(NULL));
    Secret = rand() % 10 + 1;

    cout << "Please enter a value to guess: " << endl;
    cin >> Guess;

    do
    {
        if (Guess<Secret) puts ("Higher...");
        else if (Guess>Secret) puts ("Lower"); /// BİR DAHA BAK !!!
    } while (Guess!=Secret);

    if (Guess == Secret) {
        cout << "Congrats !!!" << endl;
    }

    return 0;
    
}
