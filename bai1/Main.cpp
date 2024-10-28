#include <iostream>
#include "Diem.cpp"

using namespace std;

/**
 * Hàm main làm các công việc sau:
 * 1. Nhập vào tọa độ của điểm A.
 * 2. Xuất tọa độ của điểm A.
 * 3. Xuất tọa độ của điểm gốc tọa độ.
 * 4. Xuất hoành độ của điểm A.
 * 5. Xuất tung độ của điểm A.
 * 6. Nhập vào hoành độ và tung độ mới cho điểm A.
 * 7. Xuất tọa độ của điểm A sau khi thay đổi.
 * 8. Nhập vào tọa độ của vector tịnh tiến v(x, y).
 * 9. Tịnh tiến điểm A theo vector v(x, y).
 * 10. Xuất tọa độ của điểm A sau khi tịnh tiến.
 */
int main() {
    cout << "Nhap toa do diem A (x, y): ";
    float x, y; cin >> x >> y;
    Diem A(x, y);
    Diem GocToaDo = Diem();
    cout << "--> Diem A: "; A.Xuat();
    cout << "--> Diem goc toa do: "; GocToaDo.Xuat();
    cout << "--> Hoanh do diem A: " << A.GetHoanhDo() << '\n';
    cout << "--> Tung do diem A: " << A.GetTungDo() << '\n';
    cout << "Nhap hoanh do va tung do moi cho diem A: "; cin >> x >> y;
    A.SetHoanhDo(x);
    A.SetTungDo(y);
    cout << "--> Diem A sau khi thay doi: "; A.Xuat();
    cout << "Nhap tung do va hoanh do cua vector tinh tien v(x, y): ";
    cin >> x >> y;
    A.TinhTien(x, y);
    cout << "--> Diem A sau khi tinh tien: "; A.Xuat();
}