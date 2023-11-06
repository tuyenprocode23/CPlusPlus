#include <bits/stdc++.h>

using namespace std;


class HANG
{
    private:
        char MAHANG[10];
        char TENHANG[20];
        float DONGIA;
        int SOLUONG;
    public:
        void nhap();
        void xuat();

}; 

void HANG::nhap() {

    cout<< " Ma hang : "; fflush(stdin); gets(MAHANG);
    cout<< " Ten hang : "; fflush(stdin); gets(TENHANG);
    cout<< " Don gia : "; cin>>DONGIA;
    cout<< " So luong : "; cin>>SOLUONG;

}

void HANG::xuat() {

    cout << setw(10) << MAHANG << setw(20) << TENHANG << setw(10) << DONGIA << setw(10) << SOLUONG << setw(20) << DONGIA*SOLUONG << endl;

}

int main () {

    cout << "-----NHAP VAO THONG TIN-----" << endl;
    int n;
    cout << " Nhap vao so mat hang : "; cin >> n;
    HANG * x = new HANG[n];
    for(int i = 0; i < n; i++)
        {
            cout << " Nhap hang " << i+1 << endl;
            x[i].nhap();
        }
    cout << setw(10) << " MA HANG " << setw(20) << " TEN HANG " << setw(10) << " DONGIA " << setw(10) << " SO LUONG " << setw(20) << " THANH TIEN " << endl;
    for(int i = 0; i < n; i++)
        x[i].xuat();
    return 0;
     
}