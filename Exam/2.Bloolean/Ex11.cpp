#include <iostream>

using namespace std;

int main () {

    int a, b;

    cout << "  a = ";

    cin >> a ;

    cout << "  b =  ";

    cin >> b;

    int max ;   

    max = ( a > b ) ? a : b;

     cout << " Gia tri lon nhat la: " << max ;

    return 0;

}