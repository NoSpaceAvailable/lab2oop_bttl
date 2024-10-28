#include <iostream>
#include <vector>
#include "ThiSinh.cpp"

using namespace std;

int main() {
    vector<ThiSinh> dsThiSinh;
    int n; cout << "So luong thi sinh: "; cin >> n;
    ThiSinh ts;
    for (int i = 0; i < n; i++) {
        cout << "--- Nhap thong tin thi sinh thu " << i + 1 << " ---\n";
        ts.Nhap();
        dsThiSinh.push_back(ts);
    }

    ThiSinh max = dsThiSinh.at(0);

    for (int i = 0; i < n; ++i) {
        if (dsThiSinh.at(i).Tong() > max.Tong()) {
            max = dsThiSinh.at(i);
        }
        if (dsThiSinh.at(i).Tong() >= 15) {
            cout << "--- Thi sinh " << i + 1 << " ---\n";
            dsThiSinh.at(i).Xuat();
        }
    }

    cout << "--- Thi sinh co tong diem cao nhat ---\n";
    max.Xuat();
    
}