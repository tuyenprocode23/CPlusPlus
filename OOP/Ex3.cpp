#include <bits/stdc++.h>

using namespace std;

class HCN {

    private:
        float D;
        float R;
    
    public:
        void nhap();
        void Ve();
        float DienTich();
        float ChuVi();

};

void HCN::nhap() {

    cout << " Nhap vao Chieu Dai: "; cin >> D;
    cout << " Nhap vao Chieu Rong: "; cin >> R;

}

void HCN::Ve() {

    for(int i = 0; i<D; i++)
    {

        for(int j = 0; j<R; j++)

            cout << "*";

        cout << endl;

    }

}

float HCN::DienTich() {

    return D * R;

}

float HCN::ChuVi() {

    return 2 * (D + R);

}

int main () {

    HCN x;
    cout << "-----NHAP THONG TIN CUA HINH CHU NHAT-----" << endl;
    x.nhap();
    x.Ve();
    cout << " Dien Tich cua Hinh Chu Nhat " << x.DienTich() << endl;
    cout << " Chu Vi cua Hinh Chu Nhat " << x.ChuVi() << endl;
    return 0;

}