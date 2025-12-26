#include <iostream>
using namespace std;

int tinhTong(int a, int b) {
    return a + b;
}
float tinhTrungBinh(int a, int b) {
    return (a + b) / 2.0;  
}

int main() {
    int a, b;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;

    int tong = tinhTong(a, b);
    float trungBinh = tinhTrungBinh(a, b);

    cout << "Tong hai so = " << tong << endl;
    cout << "Trung binh cong = " << trungBinh << endl;

    return 0;
}
