#include <iostream>

using namespace std ;

int main ()

{

    int days, hours, minutes, seconds;
    int d = days;
    int h = hours;
    int m = minutes;
    int s = seconds;
    
    cin >> d >> h >> m >> s;

    int C = d * 86400 + h * 3600 + m * 60 + s ;

    cout << " Tong so giay " << C ;

    return 0 ;

}