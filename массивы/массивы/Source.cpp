#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
const int n = 10;
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	/*int arr[n];                               //����� ������������ �������
	cout << "������� ������:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << arr << endl;;
	cout << arr[n] << endl;
	cout << arr[n + 5] << endl;
	cout<<endl;*/
 
	int *x,size,b,a,el_m,max,min;
	cout << "size= ";
	cin >> size;
	cout << "ples,vvedite chislo a" << endl;
	cin >> a;
	cout << "ples vvedite chislo b" << endl;
	cin >> b;
	
	x = new int[size]; //������� ������������ ������//
	if (x==NULL){
		cout << "error!" << endl;
		return 0;
		delete[]x;
	}
	srand(time(NULL)); 
	cout << "����d��� ������������ ������" << endl;
	for (int i = 0; i < size; i++)
	{    
	el_m = rand() % (b - a + 1) + a;      //�������� �������� �������//
	x[i] = el_m;
	cout << x[i]<<" ";
	}
	max = x[0];
    min = x[0];
	for (int i = 0; i < size; i++) {           //��� � ���//
		
		if (x[i] > max) max = x[i];
		if (x[i] < min) min = x[i];
	}
	cout << endl;
	cout << "����������� ������� �������=" << min << endl;
	cout << "������������ ������� �������=" << max << endl;
	cout << "��������������� �� �������� ������������ ������:" << endl;
	for (int i = 0; i < size-1; i++) {                                   //���������� �������//
		for (int j = i + 1; j < size; j++)
			if (x[i] < x[j]) swap(x[j], x[i]);
	}
	for (int i = 0; i < size; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
	cout << "������� ������ �������� ��������� �������:" << endl;
	for (int i = 0; i < size; i++) {                                    //������� ������ �������� ��������� ��������� �������
		if (i % 2 == 0)
		    {
			cout << x[i]<<" ";
			}
	}
			cout << endl;
	delete []x;
	system("pause");
	return 0;
}