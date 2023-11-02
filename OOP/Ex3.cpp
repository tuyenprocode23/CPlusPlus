#include <bits/stdc++.h>

using namespace std;

class HCN {

    private:
        float chieudai;
        float chieurong;
    
    public:
        void nhap();
        void Ve();
        void DienTich();
        void ChuVi();

};

void HCN::nhap() {

    cout << " Nhap vao Chieu Dai: "; cin >> chieudai;
    cout << " Nhap vao Chieu Rong: "; cin >> chieurong;

}

void HCN::Ve() {

    for(int i = 0; i<chieudai; i++)
    {

        for(int j = 0; j<chieurong; j++)

            cout << "*";

        cout << endl;

    }

}

void HCN::DienTich() {

    return chieudai * chieurong;

}

void HCN::ChuVi() {

    return 2 * (chieudai + chieurong);

}

int main () {

    HCN x;
    cout << "-----NHAP THONG TIN CUA HINH CHU NHAT-----"; endl;
    x.nhap();
    x.Ve();
    cout << " Dien Tich cua Hinh Chu Nhat " << x.DienTich() << endl;
    cout << " Chu Vi cua Hinh Chu Nhat " << x.ChuVi() << endl;
    return 0;

}