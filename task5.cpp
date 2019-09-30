#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a;

	cout << "Введите трехзначное число A" << endl;
	cin >> a;
	if (a > 99 && a < 1000)
	{
		a = (a % 100 * 10) + (a / 100);
		cout << "Новое число равно " << a << endl;
	}
	else 
	{
		cout << "Вы ввели нетрехзначное число. Попробуйте еще раз" << endl;
	}

	system("pause");
	return 0;
}
