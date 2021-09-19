// Lab_02.cpp
// < Коцюба Остап >
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 4
#include <iostream>
#include <cmath>


using namespace std;
int main()
{
	double m; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "m = "; cin >> m;
	z1 = (sin(m) + sin(5 * m) - sin(3 * m)) / (cos(m) - cos(3 * m) + cos(5 * m));
	z2 = tan(3*m);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
