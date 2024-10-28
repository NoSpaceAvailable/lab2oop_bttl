#pragma once
#include <cmath>
#include "DaGiac.h"

/**
 * Nhập thông tin tọa độ các điểm cho đa giác
 */
void DaGiac::Nhap() {
    std::cout << "Nhap so dinh: ";
    std::cin >> n;
    dinh = new Diem[n];
    float x, y;
    for (int i = 0; i < n; i++) {
        std::cout << "Nhap dinh thu " << i + 1 << '\n';
        std::cin >> x >> y;
        dinh[i].SetHoanhDo(x);
        dinh[i].SetTungDo(y);
    }
}

/**
 * Xuất thông tin tọa độ các đỉnh của đa giác
 */
void DaGiac::Xuat() {
    for (int i = 0; i < n; i++) {
        std::cout << "Dinh thu " << i + 1 << std::endl;
        dinh[i].Xuat();
    }
}

/**
 * Tịnh tiến đa giác theo vector (x, y)
 * @param x: hoành độ vector tịnh tiến
 * @param y: tung độ vector tịnh tiến
 */
void DaGiac::TinhTien(float x, float y) {
    for (int i = 0; i < n; i++) {
        dinh[i].TinhTien(x, y);
    }
}

/**
 * Phóng to đa giác theo hệ số k
 */
void DaGiac::PhongTo(float k) {
    for (int i = 0; i < n; i++) {
        dinh[i].SetHoanhDo(dinh[i].GetHoanhDo() * k);
        dinh[i].SetTungDo(dinh[i].GetTungDo() * k);
    }
}

/**
 * Thu nhỏ đa giác theo hệ số k
 */
void DaGiac::ThuNho(float k) {
    for (int i = 0; i < n; i++) {
        dinh[i].SetHoanhDo(dinh[i].GetHoanhDo() / k);
        dinh[i].SetTungDo(dinh[i].GetTungDo() / k);
    }
}

/**
 * Quay đa giác theo góc alpla
 * @param alpla: góc quay theo radian
 */
void DaGiac::Quay(float alpla) {
    for (int i = 0; i < this->n; ++i) {
        Diem G = Diem();
        Diem DiemSauKhiQuay = Diem(
            (this->dinh[i].GetHoanhDo() - G.GetHoanhDo()) * cos(alpla) - (this->dinh[i].GetTungDo() - G.GetTungDo()) * sin(alpla) + G.GetHoanhDo(),
            (this->dinh[i].GetHoanhDo() - G.GetHoanhDo()) * sin(alpla) + (this->dinh[i].GetTungDo() - G.GetTungDo()) * cos(alpla) + G.GetTungDo()
        );
        this->dinh[i] = DiemSauKhiQuay;
    }
}