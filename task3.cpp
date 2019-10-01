#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;

	cout << "Введите числа A и B так, чтобы A было больше B и они были бы положительными " << endl;
	cin >> a;
	cin >> b;

	if (a > 0 && b > 0)
	{
		if (a > b)
		{
			a = a % b;
			cout << "Длина незанятой части отрезка A равна " << a << endl;
		}
		else
		{
			cout << "Вы ввели число B, которое больше A, что не следует условиям задачи. Попробуйте еще раз " << endl;
		}
	}
	else
	{
		cout << "Вы ввели отрицательные A и B. Попробуйте еще раз, но следуйте условию " << endl;
	}

	system("pause");
	return 0;
}
