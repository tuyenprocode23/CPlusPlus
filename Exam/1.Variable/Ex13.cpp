#include <iostream>

using namespace std ;

int main ()

{

    int a ;

    cin >> a ;

    bool b = ( a % 2 == 0 ) && ( a > 0 ) ;

    cout << b ;

    return 0 ;

}