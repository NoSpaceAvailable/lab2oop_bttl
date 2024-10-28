#include "../bai2/TamGiac.cpp"
#include <iostream>
#include <cmath>
#define DEGR_FORWARD(axis, alpha, len, func) (axis + len * func(alpha * M_PI / 180))  
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cout << "Nhap toa do diem A, B, C cua tam giac: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << "Nhap goc quay: ";
    float alpha; cin >> alpha;
    cout << "Nhap do dai tinh tien: ";
    float len; cin >> len;
    TamGiac tg = TamGiac(Diem(DEGR_FORWARD(x1, alpha, len, cos), DEGR_FORWARD(y1, alpha, len, sin)),
                         Diem(DEGR_FORWARD(x2, alpha, len, cos), DEGR_FORWARD(y2, alpha, len, sin)),
                         Diem(DEGR_FORWARD(x3, alpha, len, cos), DEGR_FORWARD(y3, alpha, len, sin)));
    cout << "Tam giac sau khi tinh tien theo goc " << alpha << " va do dai " << len << " la: \n";
    tg.Xuat();
}