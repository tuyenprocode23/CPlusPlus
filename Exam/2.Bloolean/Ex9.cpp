#include <iostream>

using namespace std;

int main () {

    int years, month;

    cin >> years >> month;

    switch ( month )
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            cout << " Thang " << month << " nam " << years << " co 31 ngay ";

            break;
    
        case 4:
        case 6:
        case 9:
        case 11:

            cout << " Thang " << month << " nam " << years << " co 30 ngay";

            break;

        case 2:

            cout << " Thang " << month << " nam " << years <<  " co 29 ngay ";

            break;

        default:

            cout << " Thang khong hop le ";

            break;

        if (((years % 400 == 0)||(years % 4 == 0)) && (years % 100 != 0)) {

            cout << " Thang " << month << " nam " << years << " co 29 ngay ";

        } else {

            cout << " Thang " << month << " nam " << years << " co 28 ngay ";
        }

    }

    return 0;

}