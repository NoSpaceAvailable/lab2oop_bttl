#include "Diem.h"
#pragma once

/**
 * Default constructor. Khởi tạo điểm ở gốc tọa độ.
 */
Diem::Diem() {
    this->iHoanh = 0;
    this->iTung = 0;
}

/** 
 * Constructor. Khởi tạo điểm với tọa độ xác định.
 * @param Hoanh: Tọa độ hoành.
 * @param Tung: Tọa độ tung.
 */
Diem::Diem(float Hoanh, float Tung) {
    this->iHoanh = Hoanh;
    this->iTung = Tung;
}

/**
 * Copy constructor. Sao chép điểm.
 * @param x: Điểm cần sao chép.
 */
Diem::Diem(const Diem &x) {
    this->iHoanh = x.iHoanh;
    this->iTung = x.iTung;
}

/**
 * Xuất tọa độ của điểm.
 */
void Diem::Xuat() {
    std::cout << "(" << this->iHoanh << ", " << this->iTung << ")\n";
}

/**
 * Lấy tọa độ tung của điểm.
 * @return Tọa độ tung.
 */
float Diem::GetTungDo() {
    return this->iTung;
}

/**
 * Lấy tọa độ hoành của điểm.
 * @return Tọa độ hoành.
 */
float Diem::GetHoanhDo() {
    return this->iHoanh;
}

/**
 * Set tọa độ tung của điểm.
 * @param Tung: Tọa độ tung.
 */
void Diem::SetTungDo(float Tung) {
    this->iTung = Tung;
}

/**
 * Set tọa độ hoành của điểm.
 * @param Hoanh: Tọa độ hoành.
 */
void Diem::SetHoanhDo(float Hoanh) {
    this->iHoanh = Hoanh;
}

/**
 * Tịnh tiến điểm theo vector (Hoanh, Tung).
 * @param Hoanh: Tung độ của vector tịnh tiến.
 * @param Tung: Hoành độ của vector tịnh tiến.
 */
void Diem::TinhTien(float Hoanh, float Tung) {
    this->iHoanh += Hoanh;
    this->iTung += Tung;
}