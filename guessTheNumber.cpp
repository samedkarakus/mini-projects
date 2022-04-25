#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std; // Beş kere tahmin hakkı, hepsini bilirse kazanır. Bilemezse oyun biter. (Yukarı-Aşağı)

int main() {
    beginning: {
    string up, down, UpDown, answer;
    srand(time(0));
    int x = 5;
    cout << "Guess the next number if it is upper, lower or equal to " << x << "." << " (1 to 10)" << endl;

    for (int i = 0; i < 5; i++) {
        int y = 1 + rand() % 10;
        cin >> UpDown;
        if (UpDown == "upper" || UpDown == "Upper" || UpDown == "UPPER") {
            if (x < y) {
                cout << "You are right, "  << "the number is " << y << ", continue." << endl;
            } else if(x > y) {
                cout << "You are wrong, " << "the number is " << y << "." << endl << "Game over.";
                goto end;
            }
        }else if (UpDown == "lower" || UpDown == "Lower" || UpDown == "LOWER") {
            if (x > y) {
                cout << "You are right, "  << "the number is " << y << ", continue." << endl;
            } else if(x < y) {
                cout << "You are wrong, " << "the number is " << y << "." << endl << "Game over.";
                goto end;
            }
        }else if (UpDown == "equal" || UpDown == "Equal" || UpDown == "EQUAL") {
            if (x > y) {
                cout << "You are right, "  << "the number is " << y << ", continue." << endl;
            } else if(x < y) {
                cout << "You are wrong, " << "the number is " << y << "." << endl << "Game over.";
                goto end;
            }
        }else if (i == 5) {
            cout << "Congratulations, you win !!!!";
        }else {
            cout << "Please enter an acceptable string";
            goto end;
    }
    }

    end: {
        cout << " Play again? ";
        cin >> answer;

        if (answer == "Yes" || answer == "yes" || answer == "YES") {
            goto beginning;
        }else if (answer == "No" || answer == "no" || answer == "NO") {
            cout << "Okay, that was a nice try..."; << endl;
            goto done;
        }
    }

    done:
    return 0;
    }
}
