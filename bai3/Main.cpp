#include <iostream>
#include "DaGiac.cpp"

/**
 * Hàm main làm các công việc sau:
 * - Nhập thông tin của đa giác
 * - Tịnh tiến đa giác
 * - Phóng to đa giác
 * - Thu nhỏ đa giác
 * - Quay đa giác
 * - Xuất thông tin của đa giác sau khi thay đổi
 */
int main() {
    DaGiac dagiac;

    // Nhập các đỉnh của đa giác
    std::cout << "Nhap thong tin cua da giac:" << std::endl;
    dagiac.Nhap();

    // Xuất thông tin ban đầu của các đỉnh
    std::cout << "\nToa do cac dinh cua da giac:" << std::endl;
    dagiac.Xuat();

    // Thực hiện tịnh tiến đa giác
    float dx, dy;
    std::cout << "\nNhap vector tinh tien (x, y): ";
    std::cin >> dx >> dy;
    dagiac.TinhTien(dx, dy);

    // Xuất lại thông tin sau khi tịnh tiến
    std::cout << "\nToa do cac dinh sau khi tinh tien:" << std::endl;
    dagiac.Xuat();

    // Phóng to đa giác
    float k;
    std::cout << "\nNhap he so phong to: ";
    std::cin >> k;
    dagiac.PhongTo(k);

    // Xuất lại thông tin sau khi phóng to
    std::cout << "\nToa do cac dinh sau khi phong to:" << std::endl;
    dagiac.Xuat();

    // Thu nhỏ đa giác
    std::cout << "\nNhap he so thu nho: ";
    std::cin >> k;
    dagiac.ThuNho(k);

    // Xuất lại thông tin sau khi thu nhỏ
    std::cout << "\nToa do cac dinh sau khi thu nho:" << std::endl;
    dagiac.Xuat();

    // Quay đa giác
    float alpha;
    std::cout << "\nNhap goc quay (radian): ";
    std::cin >> alpha;
    dagiac.Quay(alpha);

    // Xuất lại thông tin sau khi quay
    std::cout << "\nToa do cac dinh sau khi quay:" << std::endl;
    dagiac.Xuat();

    return 0;
}
