#include <bits/stdc++.h>

using namespace std;

class NHANVIEN {

    private: 
        char HOTEN [30];
        char CHUCVU [50];
    public:
        void nhap();
        void xuat();    
};

void NHANVIEN::nhap() {

    cout << " HO TEN " ; fflush(stdin) ; cin.getline(HOTEN, 30);
    cout << " CHUC VU " ; fflush(stdin) ; cin.getline(CHUCVU, 50);

}

void NHANVIEN::xuat() {

    cout << " Nhan vien : " << setw(25) << HOTEN << setw(25) << " Chuc vu : " << setw(25) << CHUCVU << endl;

}

class PHONG {

    private:
        char MAPH[10];
        char TENPH[30];
        char TENTP[30];
    public:
        void nhap();
        void xuat();

};

void PHONG::nhap() {

    cout << " Ma phong hop "; fflush(stdin) ; cin.getline(MAPH, 10);
    cout << " Ten phong hop "; fflush(stdin) ; cin.getline(TENPH, 30);
    cout << " Truong phong "; fflush(stdin) ; cin.getline(TENTP, 30);

}

void PHONG::xuat() {

    cout << setw(25) << " Ten Phong " << setw(25) << TENPH << setw(25) << " Ma Phong " << setw(25) << MAPH << setw(25) << " Truong Phong " << setw(25) << TENTP << endl;

}

class TAISAN {

    private:
        char TENTS[30];
        int SL;
        char TINHTRANG[50];
    public:
        void nhap();
        void xuat();
    friend class PHIEU;
};

void TAISAN::nhap(){

    cout << " Ten tai san "; fflush(stdin) ; cin.getline(TENTS, 30);
    cout << " So luong "; cin >> SL;
    cout << " Tinh trang "; fflush(stdin) ; cin.getline(TINHTRANG, 50);

}

void TAISAN::xuat() {

    cout << setw(25) << TENTS << setw(25) << SL << setw(25) << TINHTRANG << endl;

}

class PHIEU {
    private:
        char MAPH[10];
        char NGAY[12];
        NHANVIEN X;
        PHONG Y;
        TAISAN*Z;
        int n;
    public:
        void nhap();
        void xuat();    

};

void PHIEU::nhap() {

    cout << " Ma Phieu "; fflush(stdin) ; cin.getline(MAPH, 10);
    cout << " Ngay "; fflush(stdin) ; cin.getline(NGAY, 12);
    X.nhap() ;
    Y.nhap() ;
    cout << " So tai san ";  cin >> n;
    Z = new TAISAN[n];
    for(int i = 0; i < n; i++)
        Z[i].nhap();
}

void PHIEU::xuat() {

    cout << setw(40) << " PHIEU KIEM KE TAI SAN " << endl;
    cout << setw(25) << " Ma Phieu " << setw(25) << MAPH << setw(25) << " Ngay " << setw(25) << NGAY << endl;
    X.xuat();
    Y.xuat();
    cout << setw(25) << " Ten tai san"<< setw(25) << " So luong " << setw(25) << " Tinh trang" << endl;
    for(int i = 0; i < n; i ++)
        Z[i].xuat();
    cout << " Tong so tai san : " << n;
    int T=0;
    for(int i = 0; i < n; i ++)
        T = T + Z[i].SL;
    cout << " Tong so luong : " << T;   

}

int main () {

    PHIEU K;
    K.nhap();
    K.xuat();

}