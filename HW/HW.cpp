// HW.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//калькулятор 
	int a, b;
	char oper;
	cout << "введите операцию: ";
	cin >> a >> oper >> b;

	(oper == '+') ? cout << a + b :
		(oper == '-') ? cout << a - b :
		(oper == '/') ? cout << a / b :
		(oper == '*') ? cout << a * b :
		(oper == '%') ? cout << a % b : cout << "не верный оператор";

	//високосный год
	int year;
	cout << endl <<"введите год: ";
	cin >> year;
	if (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0))
	{
		cout << "год високосный";
	}
	else
	{
		cout << "год не високосный";
	}
}

