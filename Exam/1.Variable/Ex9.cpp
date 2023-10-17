#include <iostream>

#include <cmath>

using namespace std;

const float PI = 3.14;

int main() { 
    float r;

    cin >> r;

        float C = 2*r*PI;
        float S = pow(r,2)*PI;
        
    cout<< "Chu vi hinh tron la " << C << endl ; 
    cout<< "Dien tich hinh tron la "<< S ;

    return 0;

}