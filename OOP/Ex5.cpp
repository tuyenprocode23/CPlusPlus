#include <bits/stdc++.h>

using namespace std;

class SACH {

    private:
        char maSach [20];
        char tenSach [30];
        char Nxb [20];
        int soTrang;
        float giaTien;
    public:
        void nhap();
        void xuat();

};

void SACH::nhap() {

    cout << " Nhap vao ma sach: "; fflush(stdin); gets(maSach);
    cout << " Nhap vao ten sach: "; fflush(stdin); gets(tenSach);
    cout << " Nhap vao nha xuat ban: "; fflush(stdin); gets(Nxb);
    cout << " Nhap vao so trang: "; cin >> soTrang;
    cout << " Nhap vao gia tien: "; cin >> giaTien;

}

void SACH::xuat() {

     cout << setw(10) << maSach << setw(20) << tenSach << setw(10) << Nxb << setw(10) << soTrang << setw(20) << giaTien << endl;

}

int main() {

    cout << "-----NHAP VAO THONG TIN-----" << endl;
    int n;
    cout << " Nhap vao danh sach cuon sach: "; cin >> n;
    SACH * x = new SACH[n];
    for(int i = 0; i < n; i++) {
        cout << " Nhap sach thu " << i+1 << endl;   
            x[i].nhap();
    }
    cout << setw(10) << " MA SACH " << setw(20) << " TEN SACH " << setw(10) << " SO TRANG " << setw(10) << " GIA TIEN " << endl;  
    for(int i = 0; i < n; i++)
        x[i].xuat();
    return 0;
    
}