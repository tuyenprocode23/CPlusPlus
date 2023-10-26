#include <iostream>

using namespace std;

int main () {

    int a , b, c;

    cout << " Gia tri cua a la ";

    cin >> a;

    cout << " Gia tri cua b la ";

    cin >> b;

    c = ( a < b ) ? a : b;

    cout << " Gia tri nho hon la " << c;

    return 0;
    
}