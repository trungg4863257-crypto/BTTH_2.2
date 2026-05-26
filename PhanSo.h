#pragma once
#ifndef PHANSO_H
#define PHANSO_H
class PhanSo {
private:
    int iTu;
    int iMau;
public:
    void Nhap();
    void Xuat();
    void RutGon();
    PhanSo Tong(PhanSo b);
    PhanSo Hieu(PhanSo b);
    PhanSo Tich(PhanSo b);
    PhanSo Thuong(PhanSo b);
    int SoSanh(PhanSo b); // -1: <, 0: =, 1: >
};

#endif
