#include "ThiSinh.h"
#include <iostream>
#pragma once

/**
 * Nhập thông tin thí sinh
 */
void ThiSinh::Nhap() {
    std::cin.ignore();
    std::cout << "Nhap ten: "; std::getline(std::cin, this->Ten);
    std::cout << "Nhap MSSV: "; std::cin >> this->MSSV;
    std::cout << "Nhap ngay thang nam sinh: "; std::cin >> this->iNgay >> this->iThang >> this->iNam;
    std::cout << "Nhap diem toan: "; std::cin >> this->fToan;
    std::cout << "Nhap diem van: "; std::cin >> this->fVan;
    std::cout << "Nhap diem anh: "; std::cin >> this->fAnh;
}

/**
 * Xuất thông tin thí sinh
 */
void ThiSinh::Xuat() {
    std::cout << "Ten: " << this->Ten << '\n';
    std::cout << "MSSV: " << this->MSSV << '\n';
    std::cout << "Ngay thang nam sinh: " << (this->iNgay < 10 ? "0" : "") << this->iNgay << "/" << (this->iThang < 10 ? "0" : "") << this->iThang << "/" << this->iNam << '\n';
}

/**
 * Tính tổng điểm 3 môn của thí sinh
 * @return tổng điểm 3 môn
 */
float ThiSinh::Tong() {
    return this->fToan + this->fVan + this->fAnh;
}