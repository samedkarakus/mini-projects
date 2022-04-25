#include <iostream>

using namespace std;

int main() {
    int girdi;
    int bus_no = girdi / 50;
    int artan = girdi % 50;
    int empty = 50 - artan;

    cout << "Please enter the number of passengers: " << endl;
    cin >> girdi;

    if (girdi > 50) {

        if (girdi % 50 == 0) {
            cout << "The passengers are in " << girdi / 50 << " buses." << endl;
        }
        else {
            cout << "The passengers are in " << (girdi / 50) + 1 << " buses." << endl;
        }


        while (girdi > 50) {
            girdi = girdi - 50;
        }

        if (girdi == 0) {
            //cout << "The passengers are in " << bus_no << " buses." << endl; 
            //Bu bölge döngüden sonra olduğu için ilk girdi olmuyor. Döngü dışı olursa çalışır.
            cout << "The last bus contains " << 50 << " passengers." << endl;
            cout << "The last bus has no empty seats." << endl;
        }
        else if (0 < girdi < 50) {
            //cout << "The passengers are in " << bus_no << " buses." << endl;
            cout << "The last bus contains " << girdi << " passengers." << endl;
            cout << "The last bus has " << 50 - girdi << " empty seats." << endl;
        }
    }

    else if (0 <= girdi < 50){
        cout << "The passengers are in a bus." << endl;
        cout << "The bus contains " << girdi << " passengers." << endl;
        cout << "The bus has " << 50 - girdi << " seats." << endl;
    }

    return 0;
}
