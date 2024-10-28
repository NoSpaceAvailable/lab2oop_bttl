#pragma once
#include <iostream>

class ThiSinh {
    private:
        std::string Ten, MSSV;
        int iNgay, iThang, iNam;
        float fToan, fVan, fAnh;
    public:
        void Nhap();
        void Xuat();
        float Tong();
};