#include <iostream>

using namespace std;

int main () {

    float tong_tien, luong_co_ban;

    cin >> tong_tien >> luong_co_ban;

    float tien_thue = ( tong_tien - luong_co_ban ) * 0.1 ;

    if ( tong_tien <= luong_co_ban ) {

        cout << " Thuc linh = " << tong_tien;

    } else {

        cout << " Thuc linh " << tong_tien - tien_thue;

    }

    return 0; 
    
}