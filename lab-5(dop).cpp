#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void TaskVariant()
{
	//подсчет варианта
	int K, N, Z;
	K = 0;
	N = 0;
	cout << "Variant:\n";
	cin >> N;
	for (K = 1; K <= 4; K++)
	{
		Z = 21 * (K - 1) + N;
		cout << "Z(" << K << ") = " << Z;
		cout << "\n\n";
	}
	cout << "\n\n";
}
void Task11()
{
	//Решить систему уравнений x = x ^ 2 + y ^ 2 + 0, 05;
	//                         y = x ^ 2 - y ^ 2 + 0, 23;
	//						   x = 0; y = 0; точность 10^-4
	double x, y, z;

	cout << "Vvedite x: ";
	cin >> x;
	cout << "Vvedite y: ";
	cin >> y;
	z = 0;

	if ((x * x + y * y + 0.05) == 0) {
		z = x * x + y * y + 0.05;
	}
	else if ((x * x - y * y + 0.23) == 0)
	{
		z = x * x - y * y + 0.23;
	}
	cout << "Z=" << z << endl;
}
void Task32()
{
	//Дано натуральное число, в котором все цифры различны.Определить порядковые номера его максимальной и
	//минимальной цифр, считая номера :
	//а) от конца числа;
	//б) от начала числа.
	int a, b = 0, d = 0, c, a_; //максимальный
	cout << "Enter number: ";
	cin >> a;
	a_ = a;
	while (a > 0)
	{
		d++;
		if (a % 10 > b)
		{
			b = a % 10;
			c = d;
		}

		a /= 10;
	}
	cout << "Max" << endl;
	cout << "from the end " << c << "     from the beginn " << d - c + 1 << endl;
	a = a_; //минимальный
	c = 0;
	b = 10;
	d = 0;
	while (a > 0)
	{
		d++;
		if (a % 10 < b)
		{
			b = a % 10;
			c = d;
		}
		a /= 10;
	}
	cout << "Min" << endl;
	cout << "from the end " << c << "     from the beginn " << d - c + 1 << endl;

}
void Task53()
{
	//Найти все целые числа из промежутка от 1 до 100, в десятичной записи которых есть цифра 7.
	int a[100];
	int i;
	for (int i = 0; i < 100; i++)
	{
		a[i] = i + 1;
		cout << a[i] << " ";
	}
	for (int i = 0; i < 100; i++)
	{
		if (i % 10 == 7) { cout << endl << "(" << i << ")" << endl; }
	}
	cout << "\n";
	system("pause");
}
void Task74()
{
	//Найти все простые несократимые дроби, заключённые между 0 и 1, знаменатели которых не превышают 7 (дробь
	//задаётся двумя натуральными числами — числителем и знаменателем).

	for (int a = 1; a < 7; a++) {
		for (int b = 2; b <= 7; b++) {
			if ((a % b != 0)) {
				cout << a << "/ " << b << endl;
			}
		}
	}

	cout << endl;
	system("pause");
}
int main()
{
	int Num, i;
	for (i = 0; i <= 4; i++)
	{
		cout << "chose 11, 32, 53, 74: ";
		cin >> Num;
		switch (Num)
		{
		case 11:
			Task11();
			break;
		case 32:
			Task32();
			break;
		case 53:
			Task53();
			break;
		case 74:
			Task74();
			break;

		case 000:
			TaskVariant();
			break;

		default:
			break;
		}
	}
}
