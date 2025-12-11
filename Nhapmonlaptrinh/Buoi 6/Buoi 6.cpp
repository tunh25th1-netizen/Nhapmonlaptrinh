#include <iostream>
using namespace std;

void cau1() {
	int n, tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	cout << "Tong: " << tong << endl;
}

void cau2() {
	int n, tich = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tich += i;
	}
	cout << "Tich: " << tich << endl;
}
void cau3() {
	int n, x, tich = 1;
	cout << "Nhap n, x: ";
	cin >> x >> n;
	for (int i = 1; i <= n; i++) {
		tich *= x;
	}
	cout << "Tich: " << tich << endl;
}

int main(){
	cau3();
  }


