#include <iostream>

using namespace std;

int main () {

    int month;

    cin >> month;

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            cout << "  Thang " << month << " co 31 ngay " ;

        break;

        case 4:
        case 6:
        case 9:
        case 11:

            cout << "  Thang " << month << " co 30 ngay " ;
        
        break;

        case 2:

            cout << "  Thang " << month << " co 28 ngay " ;

        break;

    default:

            cout << " Thang khong hop le ";

        break;
    }

    return 0;

}