
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
		cout << "отгадайте число !1!" << endl;
		cin >> que;
		if (que > n) cout << "меньше" << endl;
		if (que<n) cout << "больше" << endl;
		s++;
	} while (que != n);
	cout << "вы угадали!!!!" << endl;
	cout << "кол-во попыток = " << s << endl;
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
	cout << "сумма цифр угаданного числа = " << sum << endl;
	if (m != 0) {
		for (i = 1; i <= m; i++)
		{
			faktorial *= i;
		}
	}
	else cout << "факториал =1, так как угаданное число =0" << endl;
	cout << "факториал угaдaного числа= " << faktorial << endl;
	cout << "натуральныe(й) делители(ь) загаданного числа: ";
	for (i = 2; i <= t; i++)
	{
		if ((t%i == 0) && (i <= t / 2 + 1))  cout << i << " ; ";
	}
	system("pause");
	return 0;
}
