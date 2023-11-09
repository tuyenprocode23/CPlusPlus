#include <bits/stdc++.h>

using namespace std;

class NCC
{
char MANCC[10];
char TENNCC[20];
char DCNCC[20];
public:
void NHAP();
void XUAT();
};
class HANG
{
char TENHANG[20];
float DONGIA;
int SOLUONG;
public:
void NHAP();
void XUAT();
friend class PHIEU;
};
class PHIEU
{
char MAPHIEU[20];
char NGAYLAP[20];
NCC y;
HANG *x;
int n;
public:
void NHAP();
void XUAT();
};
void NCC::NHAP()
{
cout<<"Ma NCC: "; fflush(stdin); gets(MANCC);
cout<<"Ten NCC: "; fflush(stdin); gets(TENNCC);
cout<<"DC NCC: "; fflush(stdin); gets(DCNCC);
}
void NCC::XUAT()
{
cout<<"Ma NCC: "<<setw(15)<<MANCC;
cout<<setw(15)<<"Ten NCC: "<<setw(15)<<TENNCC<<endl;cout<<"DC NCC: "<<DCNCC<<endl;
}
void HANG::NHAP()
{
cout<<"Ten hang: "; fflush(stdin); gets(TENHANG);
cout<<"Don gia: "; cin>>DONGIA;
cout<<"So luong: "; cin>>SOLUONG;
}
void HANG::XUAT()
{
cout<<setw(20)<<TENHANG<<setw(10)<<DONGIA<<setw(10)<<SOLUONG
<<setw(10)<<DONGIA*SOLUONG<<endl;
}
void PHIEU::NHAP()
{
cout<<"Ma phieu: "; fflush(stdin); gets(MAPHIEU);
cout<<"Ngay lap: "; fflush(stdin); gets(NGAYLAP);
y.NHAP();
cout<<"Nhap so mat hang: "; cin>>n;
x=new HANG[n];
for(int i=0; i<n; i++)
x[i].NHAP();
}
void PHIEU::XUAT()
{
cout<<setw(40)<<"PHIEU NHAP HANG"<<endl;
cout<<"Ma phieu: "<<setw(15)<<MAPHIEU;
cout<<setw(15)<<"Ngay lap: "<<setw(15)<<NGAYLAP<<endl;
y.XUAT();
cout<<setw(20)<<"TEN HANG"<<setw(10)<<"DON GIA"<<setw(10)
<<"SO LUONG"<<setw(10)<<"THANH TIEN"<<endl;
for(int i=0; i<n; i++)
x[i].XUAT();
double TONGTIEN=0;
for(int i=0; i<n; i++)
TONGTIEN += x[i].DONGIA*x[i].SOLUONG;
cout<<setw(50)<<"Cong thanh tien: "<<TONGTIEN<<endl;
}
int main()
{
PHIEU a;
a.NHAP();
a.XUAT();
return 0;
}