#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>


#define PRINTABLE_MAX 126
#define PRINTABLE_MIN 32

using namespace std;

int main()
{
    fstream store;
    store.open("passwords", fstream::app);
    int length = 0;
    srand(time(NULL));
    string password = "";
    unsigned char c;

    cout << "Select length (0 - 128 characters)" << endl;
    cin >> length;
    if(length < 1 || length > 128) {
        cerr << "Incorrect length supplied" << endl;
        return 1;
    }


    for(int i = 0; i < length; i++) {
        c = rand() % (PRINTABLE_MAX + 1);
        if(c < PRINTABLE_MIN) {
            i--;
        } else {
            password += c;
        }
    }
    cout << "Password generated: " << password << endl;
    store << password << endl;
    store.close();
    return 0;
}

