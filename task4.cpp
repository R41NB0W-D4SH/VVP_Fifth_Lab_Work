#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;

	cout << "Введите двузначное число A" << endl;
	cin >> a;
	if (a > 9 && a < 100)
	{
		b = a / 10;
		a = a - (b * 10);
		a = a * 10 + b;
		cout << "Новое число равно " << a << endl;
	}
	else 
	{
		cout << "Вы ввели недвузначное число. Попробуйте еще раз" << endl;
	}

	system("pause");
	return 0;
}
