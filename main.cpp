#include <iostream>
#include "PhanSo.h"
using namespace std;
int main() {
    PhanSo a, b;
    cout << "Nhap phan so A:\n";
    a.Nhap();
    cout << "Nhap phan so B:\n";
    b.Nhap();
    a.RutGon();
    b.RutGon();
    cout << "\nA = ";
    a.Xuat();
    cout << "\nB = ";
    b.Xuat();
    PhanSo tong = a.Tong(b);
    PhanSo hieu = a.Hieu(b);
    PhanSo tich = a.Tich(b);
    PhanSo thuong = a.Thuong(b);
    cout << "\n\nTong: ";
    tong.Xuat();
    cout << "\nHieu: ";
    hieu.Xuat();
    cout << "\nTich: ";
    tich.Xuat();
    cout << "\nThuong: ";
    thuong.Xuat();
    int kq = a.SoSanh(b);
    if (kq == 0)
        cout << "\nA = B";
    else if (kq < 0)
        cout << "\nA < B";
    else
        cout << "\nA > B";
    return 0;
}
