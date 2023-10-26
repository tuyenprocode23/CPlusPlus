#include <iostream>

using namespace std;

int main () {

    int a, b, c;

    cout << " Gia tri cua a la: ";

    cin >> a;

    cout << " Gia tri cua b la: ";

    cin >> b;

    cout << " Gia tri cua c la: ";

    cin >> c;

    int max;

    max = (((a > b) ? a: b) > c)? ((a > b) ? a: b) : c;

    cout << " Gia tri lon nhat la: " << max ;

    return 0;

}