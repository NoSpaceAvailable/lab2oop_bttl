#include <cmath>
#include "../bai3/DaGiac.cpp"
using namespace std;

/**
 * Hàm main làm các công việc sau:
 * - Nhập thông tin tọa độ các điểm cho đa giác
 * - Tính diện tích của đa giác và in ra màn hình
 */
int main() {
    DaGiac daGiac;
    daGiac.Nhap();
    std::cout << "Dien tich cua da giac: " << daGiac.TinhDienTich() << std::endl;
    return 0;
}