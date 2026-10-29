#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const float pi = 3.141592;
	int a = 16;
	int b = 9;
	int c = 4;
	int p = sqrt(a+b+c) / 2;
	int s = sqrt(p*(p-a) * (p-b) * (p-c));
	//математические операторы
	/*
	cout << "квадрат числа а: " << pow(a, 2) << endl;
	cout << "квадратный корень числа а: " << sqrt(a) << endl;
	cout << "кубический корень числа а: " << cbrt(a) << endl;
	cout << "модуль int числа а: " << abs(b) << endl;
	cout << "округлене до целого числа b: " << round(b) << endl;
	cout << "округление вниз числа b: " << floor(b) << endl;
	cout << "округление вверх числа b: " << ceil(b) << endl;
	cout << sin(a) << cos(a) << log(a) << endl
	*/
	//задание 1 
	/*
	cout << "задание 1";
	int kat_a, kat_b, gip;

	cout << "введите катет А: ";
	cin >> kat_a;

	cout << "введите катет Б: ";
	cin >> kat_b;
	
	gip = sqrt(pow(kat_a, 2) + pow(kat_a, 2));

	cout << gip;
	 */
	//задание 2 
	/*
	int r, S;
	cout << "введите радиус: ";
	cin >> r;
	S = pi * pow(r, 2);
	cout << "площадь круга: " << S;
	*/
	//задание 3
	int rad, digrees;
	cout << "ввведите градус: ";
	cin >> digrees;
	rad = digrees * pi / 180;
	cout << sin(rad) << endl;
	cout << cos(rad);
	
}