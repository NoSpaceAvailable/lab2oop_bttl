#include "TamGiac.h"
#pragma once

/**
 * Nhập thông tin tọa độ 3 điểm cho tam giác.
 */
void TamGiac::Nhap() {
    float x, y;
    std::cout << "Nhap diem A: ";
    std::cin >> x >> y; this->A = Diem(x, y);
    std::cout << "Nhap diem B: ";
    std::cin >> x >> y; this->B = Diem(x, y);
    std::cout << "Nhap diem C: ";
    std::cin >> x >> y; this->C = Diem(x, y);
}

/**
 * Constructor của class TamGiac.
 * @param A: Điểm A của tam giác
 * @param B: Điểm B của tam giác
 * @param C: Điểm C của tam giác
 */
TamGiac::TamGiac(Diem A, Diem B, Diem C) {
    this->A = A;
    this->B = B;
    this->C = C;
}

/**
 * Xuất thông tin tọa độ 3 điểm của tam giác.
 */
void TamGiac::Xuat() {
    std::cout << "Diem A: "; this->A.Xuat();
    std::cout << "Diem B: "; this->B.Xuat();
    std::cout << "Diem C: "; this->C.Xuat();
}

/**
 * Tịnh tiến tam giác theo vector (Hoanh, Tung).
 * @param Hoanh: Hoành độ của vector
 * @param Tung: Tung độ của vector
 */
void TamGiac::TinhTien(float Hoanh, float Tung) {
    this->A.TinhTien(Hoanh, Tung);
    this->B.TinhTien(Hoanh, Tung);
    this->C.TinhTien(Hoanh, Tung);
}

/**
 * Phóng to tam giác theo hệ số k.
 * @param k: Hệ số phóng to
 */
void TamGiac::PhongTo(float k) {
    this->A.SetHoanhDo(this->A.GetHoanhDo() * k);
    this->A.SetTungDo(this->A.GetTungDo() * k);
}

/**
 * Thu nhỏ tam giác theo hệ số k.
 * @param k: Hệ số thu nhỏ
 */
void TamGiac::ThuNho(float k) {
    this->A.SetHoanhDo(this->A.GetHoanhDo() / k);
    this->A.SetTungDo(this->A.GetTungDo() / k);
}

/**
 * Quay tam giác theo góc alpha.
 * @param alpha: Góc quay theo radian
 */
void TamGiac::Quay(float alpha) {
    Diem G = Diem();
    Diem DiemASauKhiQuay = Diem(
        (X(A) - X(G)) * cos(alpha) - (Y(A) - Y(G)) * sin(alpha) + X(G),
        (X(A) - X(G)) * sin(alpha) + (Y(A) - Y(G)) * cos(alpha) + Y(G)
    );
    Diem DiemBSauKhiQuay = Diem(
        (X(B) - X(G)) * cos(alpha) - (Y(B) - Y(G)) * sin(alpha) + X(G),
        (X(B) - X(G)) * sin(alpha) + (Y(B) - Y(G)) * cos(alpha) + Y(G)
    );
    Diem DiemCSauKhiQuay = Diem(
        (X(C) - X(G)) * cos(alpha) - (Y(C) - Y(G)) * sin(alpha) + X(G),
        (X(C) - X(G)) * sin(alpha) + (Y(C) - Y(G)) * cos(alpha) + Y(G)
    );
    this->A = DiemASauKhiQuay;
    this->B = DiemBSauKhiQuay;
    this->C = DiemCSauKhiQuay;
}