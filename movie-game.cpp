#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main() {
    string accept, answer1, answer2, answer3;
    int Guess, Secret;
    int guessNumber = 0;
    srand (time(NULL));
    Secret = rand() % 10 + 1;

    cout << "Do you wanna play card game? ";
    cin >> accept;

    if (accept == "yes" || accept == "Yes" || accept == "YES") {
        cout << "I have two cards and one of them is blue, the other on is red."<<endl<<"Which color do you choose? ";
        cin >> answer1;

        if (answer1 == "Blue" || answer1 == "Red" || answer1 == "red" || answer1 == "blue") {
            cout << "So, here we start..."<<endl<<"I'll pick a number which is between 0 and 11 and you have 3 chances to know."<<endl<<
            "If you guess the number, you'll get $10.000. However, if you couldn't guess it, I will punch you in your face."<<endl<<
            "Are you in? ";
            cin >> answer2;
            
                if (answer2 == "yes" || answer2 == "Yes" || answer2 == "Yes") {
                    cout << "What a bravely decision !!! So, I am asking you...\n";

                    do {
                        printf ("Guess the number (1 to 10): ");
                        scanf ("%d",&Guess);
                        if (Secret<Guess) puts ("The secret number is lower");
                        else if (Secret>Guess) puts ("The secret number is higher");
                        guessNumber++;

                        if (guessNumber == 3) {
                            printf("Now, your have no right to guess any number... Get this f*cking slap on your face!!!");
                            goto end;
                        }
                    } while (Secret!=Guess);
                    
                    puts ("Congratulations! You won!!! Get your $10000 and this card ;)...");
                }
                else {
                    goto decision;
                }


        } else {
            cout << "Just two color we have, try again...";
        }
    }
    else{
        decision:
        cout << "Ok, I cannot force you to play. Have a nice day...";
        goto end;
    }

    end:
    return 0;
}
