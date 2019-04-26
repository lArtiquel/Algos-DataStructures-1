#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int j,nazv, a, b, sum, m, i, t, z = 0;
	double s = 0, p = 1;
	srand(time(NULL));
	int n = rand() % (999 - 100 + 1) + 100;
	cout << "chislo= " << n << endl;
	m = n;
	cout << "обратный вывод= ";
	for (i = 1; i <= 3; i++)
	{
		s = s + m % 10;
		p = p*(m % 10);
		cout << m % 10;
		if ((m % 10) % 2 == 0) { z += 1; }
		m /= 10;
	}
	cout << endl << "среднее арифметическое= " << s / 3 << endl;
	cout << "среднее геометрическое= " << pow(p, 1. / 3) << endl;
	cout << "четные числа= " << z << endl;
	switch (n / 100)
	{
	case 1:cout << "сто ";
		break;
	case 2:cout << "двести ";
		break;
	case 3:cout << "триста ";
		break;
	case 4:cout << "четыреста ";
		break;
	case 5:cout << "пятьсот ";
		break;
	case 6:cout << "шестmcot ";
		break;
	case 7:cout << "семьсот ";
		break;
	case 8:cout << "восемьсот ";
		break;
	case 9:cout << "девятьсот ";
		break;
	}
	switch ((n / 10) % 10)
	{
	case 0:cout << "";
		break;
	case 2:cout << "двадцать ";
		break;
	case 3:cout << "тридцать ";
		break;
	case 4:cout << "сорок ";
		break;
	case 5:cout << "пятьдесят ";
		break;
	case 6:cout << "шестьдесят ";
		break;
	case 7:cout << "семьдесят ";
		break;
	case 8:cout << "восемьдесят ";
		break;
	case 9:cout << "девяностo "; break;
	}
	if (((n / 10) % 10) != 1) {
		switch (n % 10)
		{
		case 1:cout << "один";
			break;
		case 2:cout << "два";
			break;
		case 3:cout << "три";
			break;
		case 4:cout << "четыре";
			break;
		case 5:cout << "пять";
			break;
		case 6:cout << "шесть";
			break;
		case 7:cout << "семь";
			break;
		case 8:cout << "восемь";
			break;
		case 9:cout << "девять"; break;
		}
	}
	else
		switch (n % 100)
		{
		case 10:cout << "десять";
			break;
		case 11:cout << "одиннадцать";
			break;
		case 12:cout << "двенадцать";
			break;
		case 13:cout << "тринадцать";
			break;
		case 14:cout << "четырнадцать";
			break;
		case 15:cout << "пятнадцать";
			break;
		case 16:cout << "шестнадцать";
			break;
		case 17:cout << "семнадцать";
			break;
		case 18:cout << "восемьнадцать"; break;
		case 19:cout << "девятнадцать"; break;
		}
	cout<<endl;
	cout << "простые числа= " << endl;
	cout << "2"<< endl;
	for (i = 2; i <= n; i++)
	{	for (j = 2; j <=i/2+1; j++)
		if (i%j == 0) {  break; }
		else {
			
			cout << i << endl; break;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

