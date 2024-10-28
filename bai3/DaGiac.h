#pragma once
#include <iostream>
#include "../bai1/Diem.cpp"

class DaGiac {
    private:
        int n;
        Diem *dinh;
    public:
        void Nhap();
        void Xuat();
        void TinhTien(float, float);
        void PhongTo(float);
        void ThuNho(float);
        void Quay(float);
};