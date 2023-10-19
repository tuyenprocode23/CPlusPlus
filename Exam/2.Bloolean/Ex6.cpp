#include <iostream>

using namespace std;

int main () {

    int day = 0;

    switch (day)
    {
    case 0:
        cout << " Hom nay la Chu Nhat "; 
        break;
    
    case 1:
        cout << " Hom nay la Thu Hai "; 
        break;

    case 2:
        cout << " Hom nay la Thu Ba "; 
        break;

    case 3:
        cout << " Hom nay la Thu Tu "; 
        break;

    case 4:
        cout << " Hom nay la Thu Nam "; 
        break; 

    case 5:
        cout << " Hom nay la Thu Sau "; 
        break; 

    case 6:
        cout << " Hom nay la Thu Bay "; 
        break;     
    default:
        cout << " Unknow ";
        break;
    }

    return 0;

}