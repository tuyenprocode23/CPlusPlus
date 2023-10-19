#include <iostream>

using namespace std;

int main () {

    int  years;

    cin >> years;

    if ( ( years % 4 == 0 ) && ( years % 100 != 0 ) ) {

        cout << years << " la nam nhuan ";

    } else {

        cout << years << " khong la nam nhuan ";

    }

    return 0;
    
}