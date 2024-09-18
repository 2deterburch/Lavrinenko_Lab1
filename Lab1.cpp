
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int month;
	cout << "Введіть номер місяця: ";
	cin >> month;
	if (month >= 6 && month <= 8) {
		cout << "Місяць належить до літнього періоду";
	}
	else {
		cout << "Місяць не належить до літнього періоду";
	}
}
