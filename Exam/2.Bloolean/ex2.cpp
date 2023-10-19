#include <iostream>

using namespace std;

int main () {

    int i = 53;

    if ( i % 5 == 0 ) {

        cout << " Chia het cho 5 ";

    } else if ( i % 2 == 0 ) {

        cout << " Chia het cho 2 ";

    } else {
        
        cout << " Khong chia het cho 5 va 2 ";
    }

    return 0;

}