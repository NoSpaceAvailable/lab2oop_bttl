#include <iostream>
#include "TamGiac.cpp"
using namespace std;

/**
 * Hàm main làm các công việc sau:
 * 1. Nhập thông tin tọa độ 3 điểm cho tam giác.
 * 2. Xuất thông tin tọa độ 3 điểm của tam giác.
 * 3. Tịnh tiến tam giác theo vector (1, 1).
 * 4. Xuất thông tin tọa độ 3 điểm của tam giác sau khi tịnh tiến.
 * 5. Phóng to tam giác theo hệ số 2.
 * 6. Xuất thông tin tọa độ 3 điểm của tam giác sau khi phóng to.
 * 7. Thu nhỏ tam giác theo hệ số 2.
 * 8. Xuất thông tin tọa độ 3 điểm của tam giác sau khi thu nhỏ.
 * 9. Quay tam giác 90 độ.
 * 10. Xuất thông tin tọa độ 3 điểm của tam giác sau khi quay.
 */
int main() {
    TamGiac tg;
    tg.Nhap();
    tg.Xuat();
    cout << "-----------\n";
    tg.TinhTien(1, 1);
    tg.Xuat();
    cout << "-----------\n";
    tg.PhongTo(2);
    tg.Xuat();
    cout << "-----------\n";
    tg.ThuNho(2);
    tg.Xuat();
    cout << "-----------\n";
    tg.Quay(90);
    tg.Xuat();
}