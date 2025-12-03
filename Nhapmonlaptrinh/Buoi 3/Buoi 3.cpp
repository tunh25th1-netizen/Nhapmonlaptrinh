#include <iostream>
using namespace std;

void cau1() {
	const float PI = 3.14;
	// Viet chuong trinh tinh dien tich va chu vi hinh tron voi ban kinh r
	int r;
	cout << "Nhap ban kinh r:  ";
	cin >> r;
	cout << "dien tich:  " << PI * r * r << endl;
	cout << "chu vi:  " << 2 * PI * r << endl;
}
void cau2() {
	int luong, phucap;
	cout << "Nhap luong:  ";
	cin >> luong;
	cout << "Nhap phu cap:  ";
	cin >> phucap;
	cout << "Thuc lanh:  " << luong + phucap - (luong + phucap) * 0.1 << endl;
}
void cau3(){}
int main()
{
	cau2();
}


