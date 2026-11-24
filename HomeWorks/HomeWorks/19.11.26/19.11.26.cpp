#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//большее из 2 чисел
	int a, b;
	cout << "введите два числа: ";
	cin >> a >> b;

	(a > b) ? cout << "большее: " << a : cout << "большее: " << b;

	//сортировка трёх чисел
	int x, y, z, temp;
	cout << endl << "введите три числа: ";
	cin >> x >> y >> z;

	if (x > y) { temp = x; x = y; y = temp; }
	if (x > z) { temp = x; x = z; z = temp; }
	if (y > z) { temp = y; y = z; z = temp; }

	cout << "по возрастанию: " << x << " " << y << " " << z;
}