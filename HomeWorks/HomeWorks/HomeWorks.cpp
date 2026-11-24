#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//писатели
	int choice;
	cout << "выберите писателя (1-Достоевский, 2-Толстой, 3-Пушкин, 4-Булгаков): ";
	cin >> choice;

	switch (choice)
	{
	case 1: cout << "Преступление и наказание"; break;
	case 2: cout << "Война и мир"; break;
	case 3: cout << "Евгений Онегин"; break;
	case 4: cout << "Мастер и Маргарита"; break;
	default: cout << "не верный выбор";
	}

	//математические функции
	int func;
	double x, y;
	cout << endl << "выберите функцию (1-log, 2-pow, 3-sqrt, 4-cos, 5-sin): ";
	cin >> func;

	cout << "введите число: ";
	cin >> x;

	switch (func)
	{
	case 1: cout << "log = " << log(x); break;
	case 2:
		cout << "введите степень: ";
		cin >> y;
		cout << "pow = " << pow(x, y); break;
	case 3: cout << "sqrt = " << sqrt(x); break;
	case 4: cout << "cos = " << cos(x); break;
	case 5: cout << "sin = " << sin(x); break;
	default: cout << "не верная функция";
	}
}