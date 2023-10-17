#include <iostream>

using namespace std ;

int main ()

{

    float chieu_dai ;
    float chieu_rong ;

    cin >> chieu_dai >> chieu_rong ;

    float C = ( chieu_dai + chieu_rong ) * 2 ;
    float S = chieu_dai * chieu_rong ;

    cout << " Chu vi hinh chu nhat la : " << C << endl ;
    cout << " Dien tich hinh chu nhat la : " << S ;

    return 0;

}