#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <typeinfo>

using namespace std;

int musteriID(int ID_address) {
    cout << "\nPlease enter your ID address: " << endl;
    cin >> ID_address;
}

int nakliyeID(int ID_nakliye) {
    beginning:
    char nakliyeAd[100];
    cout << "\nPlease enter the name of the company: ";
    cin >> nakliyeAd;

    if (typeid(nakliyeAd) == string) {
        int nakliyeTelNo;
        cout << "Please enter the phone number of the company: ";
        cin >> nakliyeTelNo;
        try1:
        if (typeid(nakliyeTelNo == int)) {
            char nakliyeAdres[150];
            cout << "Please enter the address of the company: ";
            cin >> nakliyeAdres[150];
            try2:
            if (typeid(nakliyeAdres[150] == string) {
                //goto tedarikci;
            } else {
                cout << "Please enter string." << endl;
                goto try2;
            }
        } else {
            cout << "Please enter integer." << endl;
            goto try1;
        }
    } else {
        cout << "Please enter string." << endl;
        goto beginning;
    }}
}

tedarikci:
void tedarikci(char istenilenUrun) {
    char tedarikciAdi[100];
    printf("Please enter the name of the company: ");
    scanf("%s", &tedarikciAdi);

    int tedarikciTelNo;
    printf("Please enter the phone number of the company: ");
    scanf("%d", &tedarikciTelNo);

    char tedarikciAdres[150];
    printf("Please enter the address of the company: ");
    scanf("%s", &tedarikciAdres);

    printf("Please enter the product you want: ");
    scanf("%s", &istenilenUrun);

}

void urun(int urunKod) {
    srand(time(0));
    urunKod = 1 + rand() % 100;
    printf("Urun kodunuz %d.", &urunKod);
}



int main() {
    nakliyeID(0);
}
