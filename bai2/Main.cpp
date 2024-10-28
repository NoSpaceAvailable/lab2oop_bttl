#include <iostream>
#include "TamGiac.cpp"
using namespace std;

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
    tg.Quay(90);    // ??? bug
    tg.Xuat();
}