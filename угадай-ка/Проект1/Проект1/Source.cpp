
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, s, sum, m, i, t;
	double que, faktorial = 1;
	cout << "ples,vvedite chislo a" << endl;
	cin >> a;
	cout << "ples vvedite chislo b" << endl;
	cin >> b;
	srand(time(NULL));
	int n = rand() % (b - a + 1) + a;
	s = 0;
	sum = 0;
	do {
		cout << "��������� ����� !1!" << endl;
		cin >> que;
		if (que > n) cout << "������" << endl;
		if (que<n) cout << "������" << endl;
		s++;
	} while (que != n);
	cout << "�� �������!!!!" << endl;
	cout << "���-�� ������� = " << s << endl;
	m = n;
	t = n;
	while (true)
	{
		if (n != 0)
		{
			sum += n % 10;
			n /= 10;
		}
		else break;
	}
	cout << "����� ���� ���������� ����� = " << sum << endl;
	if (m != 0) {
		for (i = 1; i <= m; i++)
		{
			faktorial *= i;
		}
	}
	else cout << "��������� =1, ��� ��� ��������� ����� =0" << endl;
	cout << "��������� ��a�a���� �����= " << faktorial << endl;
	cout << "����������e(�) ��������(�) ����������� �����: ";
	for (i = 2; i <= t; i++)
	{
		if ((t%i == 0) && (i <= t / 2 + 1))  cout << i << " ; ";
	}
	system("pause");
	return 0;
}
