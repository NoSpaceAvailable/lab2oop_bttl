#include <iostream>
#include "Diem.cpp"

using namespace std;

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