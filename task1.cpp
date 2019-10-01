#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double a, b;

	cout << "Введите размер файла в байтах" << endl;
	cin >> a;
	b = floor(a / 1024);
	cout << "Размер файла в килобайтах равен " << b << endl;

	system("pause");
	return 0;
}
