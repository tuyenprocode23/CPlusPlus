#include <iostream>

using namespace std;

int main () {

    char lua_chon;
    int a, b;

    cin >> lua_chon;
    cin >> a >> b;

    switch (lua_chon)
    {

        case '+':

            cout << " Ket qua " << a + b;

        break;

        case '-':

            cout << " Ket qua " << a - b;
        
        break;    

        case '*':

            cout << " Ket qua " << a * b;
        
        break;

        case '/':

            cout << " Ket qua " << a / b;
        
        break;    

        default:

            cout << " Lua chon khong hop le ";

        break;

    }

    return 0;

}