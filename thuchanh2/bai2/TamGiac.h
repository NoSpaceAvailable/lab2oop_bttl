#include "../bai1/Diem.cpp"
#include <iostream>
#include <cmath>
#pragma once
#define X(i) (i.GetHoanhDo())
#define Y(i) (i.GetTungDo())

class TamGiac {
    private:
        Diem A, B, C;
    public:
        TamGiac();
        TamGiac(Diem, Diem, Diem);
        void Nhap();
        void Xuat();
        void TinhTien(float, float);
        void PhongTo(float);
        void ThuNho(float);
        void Quay(float);
};