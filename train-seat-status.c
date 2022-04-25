//A solution for train employees to give the answer of the seat situation.
//The passenger tells the seat number, this project answers the vagon-no, seat-no-in-vagon, window-ledge or coridor-ledge and double seater or single seater.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int cpsty = 50;
    int vagonNumber = 5;
    int vagonNo, passengerNo, passengerNoinVagon;

    printf("What is your passenger no: ");
    scanf("%d", &passengerNo);

    if (passengerNo <= 225) {
        if (passengerNo % 45 == 0) {
            vagonNo = passengerNo / 45;
            printf("You are in Vagon-%d\n", vagonNo);
        } else if(passengerNo % 45 != 0) {
            vagonNo = passengerNo / 45 + 1;
            printf("You are in Vagon-%d\n", vagonNo);
        }
    }else {
    while (passengerNo > 225){
        printf("The capacity is 225. ");
        break;
    }}

    
    switch (vagonNo)
    {
    case 1:
        printf("Your seat no is %d.", passengerNo);
        passengerNoinVagon = passengerNo;
        break;
    case 2:
        printf("Your seat no is %d.", passengerNo-45);
        passengerNoinVagon = passengerNo - 45;
        break;
    case 3:
        printf("Your seat no is %d.", passengerNo-90);
        passengerNoinVagon = passengerNo - 90;
        break;
    case 4:
        printf("Your seat no is %d.", passengerNo-135);
        passengerNoinVagon = passengerNo - 135;
        break;
    case 5:
        printf("Your seat no is %d.", passengerNo-180);
        passengerNoinVagon = passengerNo - 180;
        break;
    default:
        printf("There are just 5 vagons. Please check your ticket again.");
        break;
    }

    //Tekli koltuklar 1,4,7... diye gidiyor.
    if ((passengerNoinVagon + 2) % 3 == 0){
        printf(" | (Single-Seater)");
    }
    else {
        printf(" | (Double-Seater)");
    }
    
    //Pencere ve Koridor Kenarı
    if (passengerNoinVagon % 3 == 0) {
        printf(" (Window-Ledge)");
    }
    else if((passengerNoinVagon + 2) % 3 == 0) {
        printf(" (Window and Coridor Ledge)");
    }
    else {
        printf(" (Just Coridor-Ledge)");
    }

    return 0;

}
