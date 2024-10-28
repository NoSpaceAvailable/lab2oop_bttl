#include <iostream>
#include <cmath>
#include "../bai1/Diem.cpp"
#define DEGR_FORWARD(axis, alpha, len, func) (axis + len * func(alpha * M_PI / 180))  
using namespace std;

/**
 * Hàm main làm các công việc sau:
 * - Nhập vào tọa độ của một điểm.
 * - Nhập vào số lần thực hiện.
 * - Mỗi lần thực hiện, chương trình sẽ in ra menu và thực hiện theo lựa chọn của người dùng.
 * - Nếu lựa chọn không hợp lệ, chương trình sẽ in ra "Nope!".
 * - Kết thúc mỗi lần thực hiện, chương trình sẽ in ra tọa độ của điểm sau khi thực hiện.
 * - Kết thúc chương trình.
 */
int main() {
    float x, y;
    cout << "Nhap toa do diem: "; cin >> x >> y;
    Diem A(x, y);
    int n; cout << "Nhap so lan thuc hien: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Menu:\n";
        cout << "1. Nhan doi tung do va hoanh do\n";
        cout << "2. Chuyen ve goc toa do\n";
        cout << "3. Tinh tien\n";
        int choice; cin >> choice;
        switch (choice) {
            case 1: {
                A.SetHoanhDo(A.GetHoanhDo() * 2);
                A.SetTungDo(A.GetTungDo() * 2);
                cout << "Diem sau khi nhan doi: ";
                A.Xuat();
                break;
            }
            case 2: {
                A.SetHoanhDo(0);
                A.SetTungDo(0);
                cout << "Diem sau khi chuyen ve goc toa do: ";
                A.Xuat();
                break;
            }
            case 3: {
                cout << "Nhap huong tinh tien k (0 => Ox, 1 => Oy): ";
                int k; cin >> k;
                cout << "Nhap do dai tinh tien: ";
                float d; cin >> d;
                A.SetHoanhDo(DEGR_FORWARD(A.GetHoanhDo(), (k == 0 ? 0 : 90), d, cos));
                A.SetTungDo(DEGR_FORWARD(A.GetTungDo(), (k == 0 ? 0 : 90), d, sin));
                cout << "Diem sau khi tinh tien: ";
                A.Xuat();
                break;
            }
            default: {
                cout << "Nope!\n";
                break;
            }
        }
    }
}