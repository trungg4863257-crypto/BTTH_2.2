#include <iostream>
#include <cmath> 
#include "PhanSo.h"
using namespace std;
int UCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void PhanSo::Nhap() {
    do {
        cout << "Nhap tu: ";
        cin >> iTu;
        cout << "Nhap mau: ";
        cin >> iMau;
        if (iMau == 0) {
            cout << "Mau phai khac 0, nhap lai!\n";
        }
    } while (iMau == 0);
}
void PhanSo::Xuat() {
    if (iMau < 0) {
        cout << -iTu << "/" << -iMau;
    }
    else {
        cout << iTu << "/" << iMau;
    }
}
void PhanSo::RutGon() {
    int gcd = UCLN(iTu, iMau);
    iTu /= gcd;
    iMau /= gcd;
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}
PhanSo PhanSo::Tong(PhanSo b) {
    PhanSo kq;
    kq.iTu = iTu * b.iMau + b.iTu * iMau;
    kq.iMau = iMau * b.iMau;
    kq.RutGon();
    return kq;
}
PhanSo PhanSo::Hieu(PhanSo b) {
    PhanSo kq;
    kq.iTu = iTu * b.iMau - b.iTu * iMau;
    kq.iMau = iMau * b.iMau;
    kq.RutGon();
    return kq;
}
PhanSo PhanSo::Tich(PhanSo b) {
    PhanSo kq;
    kq.iTu = iTu * b.iTu;
    kq.iMau = iMau * b.iMau;
    kq.RutGon();
    return kq;
}
PhanSo PhanSo::Thuong(PhanSo b) {
    PhanSo kq;
    if (b.iTu == 0) {
        cout << "Khong the chia cho 0!\n";
        kq.iTu = 0;
        kq.iMau = 1;
        return kq;
    }
    kq.iTu = iTu * b.iMau;
    kq.iMau = iMau * b.iTu;
    kq.RutGon();
    return kq;
}
int PhanSo::SoSanh(PhanSo b) {
    int left = iTu * b.iMau;
    int right = b.iTu * iMau;

    if (left < right) return -1;
    if (left > right) return 1;
    return 0;
}
