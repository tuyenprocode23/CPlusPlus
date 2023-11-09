#include <bits/stdc++.h>

using namespace std;

class NCC {

        char maNCC [20];
        char tenNCC [30];
        char dcNCC [30];
    public:
        void nhap();
        void xuat();

};

class HANG {

        char tenHang [30];
        float donGia;
        int soLuong;
    public:
        void nhap();
        void xuat();    
    friend class PHIEU;
};

class PHIEU {

        char maPhieu [20];
        char ngayLap [50];
        NCC y;
        HANG * x;
        int n;
    public:
        void nhap();
        void xuat();

};

void NCC::nhap() {

    cout << " Ma NCC:  "; fflush(stdin); gets(maNCC);
    cout << " Ten NCC:  "; fflush(stdin); gets(tenNCC);
    cout<<"DC NCC: "; fflush(stdin); gets(dcNCC);
}

void NCC::xuat() {

    cout << " Ma NCC:  " << setw(15) << maNCC;  
    cout << setw(15) << " Ten NCC:  " << setw(15) << tenNCC << endl;
    cout << " DC NCC:  " << dcNCC << endl;

}

void HANG::nhap() {

    cout << " Ten hang:  "; fflush(stdin); gets(tenHang);
    cout << " Don gia: "; cin>>donGia;
    cout << " So luong: "; cin>>soLuong;

}

void HANG::xuat() {

    cout << setw(20) << tenHang << setw(10) << donGia << setw(10) <<soLuong << setw(10) << donGia*soLuong << endl;

}

void PHIEU::nhap () {

    cout << " Ma phieu: "; fflush(stdin); gets(maPhieu);
    cout << " Ngay lap: "; fflush(stdin); gets(ngayLap);
    y.nhap();
    x = new HANG[n];
    for(int i = 0; i < n; i++)
        x[i].nhap();

}

void PHIEU::xuat() {

    cout << setw(40) << " PHIEU NHAP HANG " << endl;
    cout << " Ma phieu:  " << setw(15) << maPhieu;
    cout << setw(15) << " Ngay lap:  " << setw(15) << ngayLap << endl;
    y.xuat();
    cout << setw(20) << " TEN HANG " << setw(15)<< " DON GIA " << setw(10)
    << " SO LUONG " << setw(10) << " THANH TIEN " << endl;
    for(int i = 0; i < n; i++)
        x[i].xuat();
    double TONGTIEN = 0;
    for(int i = 0; i < n; i++)
        TONGTIEN += x[i].donGia*x[i].soLuong;
    cout << setw(50) << " Cong thanh tien:  " << TONGTIEN << endl;

}

int main() {

    PHIEU a;
    cout << "-----NHAP VAO THONG TIN CUA PHIEU-----" << endl;
    a.nhap();
    cout << "-----XUAT RA THONG TIN CUA PHIEU-----" << endl;
    a.xuat();
    return 0;

}