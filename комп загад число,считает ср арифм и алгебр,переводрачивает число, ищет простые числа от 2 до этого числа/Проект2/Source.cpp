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
	cout << "�������� �����= ";
	for (i = 1; i <= 3; i++)
	{
		s = s + m % 10;
		p = p*(m % 10);
		cout << m % 10;
		if ((m % 10) % 2 == 0) { z += 1; }
		m /= 10;
	}
	cout << endl << "������� ��������������= " << s / 3 << endl;
	cout << "������� ��������������= " << pow(p, 1. / 3) << endl;
	cout << "������ �����= " << z << endl;
	switch (n / 100)
	{
	case 1:cout << "��� ";
		break;
	case 2:cout << "������ ";
		break;
	case 3:cout << "������ ";
		break;
	case 4:cout << "��������� ";
		break;
	case 5:cout << "������� ";
		break;
	case 6:cout << "����mcot ";
		break;
	case 7:cout << "������� ";
		break;
	case 8:cout << "��������� ";
		break;
	case 9:cout << "��������� ";
		break;
	}
	switch ((n / 10) % 10)
	{
	case 0:cout << "";
		break;
	case 2:cout << "�������� ";
		break;
	case 3:cout << "�������� ";
		break;
	case 4:cout << "����� ";
		break;
	case 5:cout << "��������� ";
		break;
	case 6:cout << "���������� ";
		break;
	case 7:cout << "��������� ";
		break;
	case 8:cout << "����������� ";
		break;
	case 9:cout << "��������o "; break;
	}
	if (((n / 10) % 10) != 1) {
		switch (n % 10)
		{
		case 1:cout << "����";
			break;
		case 2:cout << "���";
			break;
		case 3:cout << "���";
			break;
		case 4:cout << "������";
			break;
		case 5:cout << "����";
			break;
		case 6:cout << "�����";
			break;
		case 7:cout << "����";
			break;
		case 8:cout << "������";
			break;
		case 9:cout << "������"; break;
		}
	}
	else
		switch (n % 100)
		{
		case 10:cout << "������";
			break;
		case 11:cout << "�����������";
			break;
		case 12:cout << "����������";
			break;
		case 13:cout << "����������";
			break;
		case 14:cout << "������������";
			break;
		case 15:cout << "����������";
			break;
		case 16:cout << "�����������";
			break;
		case 17:cout << "����������";
			break;
		case 18:cout << "�������������"; break;
		case 19:cout << "������������"; break;
		}
	cout<<endl;
	cout << "������� �����= " << endl;
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

