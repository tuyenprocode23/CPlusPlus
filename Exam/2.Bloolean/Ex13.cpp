#include <iostream>

using namespace std;

int main () {

    int n;

    cout << " Nhap gia tri cua n: ";

    cin >> n;

    int resulf;

    resulf = (( n % 2 == 0 ) && ( n % 3 != 0 )) ? ( n * 2) : ( n * 3 );

    cout << " Gia tri cua n la: " << resulf;

    return 0; 

}