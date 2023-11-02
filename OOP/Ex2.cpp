#include <bits/stdc++.h>

using namespace std;

class SINHVIEN {
    
    private:
        char maSV [20];
        char hoTen [30];
        int tuoi;
        float diem;

    public:
        void nhap();
        void xuat();

};

void SINHVIEN::nhap() {

    cout << " Nhap vao ma SV: "; fflush(stdin); gets(maSV);
    cout << " Nhap vao ho ten: "; fflush(stdin); gets(hoTen);
    cout << " Nhap vao tuoi: "; cin >> tuoi;
    cout << " Nhap vao diem: "; cin >> diem;

}

void SINHVIEN::xuat() {

    cout << " Ma Sinh Vien " << maSV << endl;
    cout << " Ho va Ten " << hoTen << endl;
    cout << " Tuoi " << tuoi << endl;
    cout << " Diem " << diem << endl;

}

int main () {

    SINHVIEN a, b;
    cout << "-----NHAP THONG TIN CUA SINH VIEN A-----" << endl;
    a.nhap();
    cout << "-----NHAP THONG TIN CUA SINH VIEN B-----" << endl;
    b.nhap();
    cout << "-----THONG TIN VE SINH VIEN A-----" << endl;
    a.xuat();
    cout << "-----THONG TIN VE SINH VIEN B-----" << endl;
    b.xuat();
    return 0;

}