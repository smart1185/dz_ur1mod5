#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int Number;
	start:
	cout << "������� ����� �������: ";
	cin >> Number;

	switch (Number)
	{
	case 1: /*1.�������� ���������� ������ ������ ���� ��������� ������� M. ������� �������� ��������� � �������
			���������� ��������� �����. ������������ ������.*/
	{
		const int m = 10;
		int a[m];
		for (int i = 0; i < m; i++)
		{
			a[i] = rand() % 100 + 1;
			cout << a[i] << endl;
		}
	}
	break;

	case 2: /*2.������ ������������ ��� �������� �������� ����� �������� �������. � ������� ������� ��������� �����
			��������� ������ ������ ����������, �������� � ��������� �� 50 �� 100 ������������*/
	{
		int a[20];
		for (int i = 0; i < 20; i++)
		{
			a[i] = rand() % 50 + 50;
			cout << a[i] << endl;
		}
	}
	break;

	case 3:/*3.��������� ������ �� ������ ��������� ����� �������, ����� �������� ��������� ��� ��������� ������� �����
		   ������� ������������:
		   a.	��������� ������������������;
		   b.	������������ ������������������*/
	{
		int a[8] = { 20,19,15,11,9,8,5,1 }, b[8] = { 2,3,5,8,9,12,15,19 };
		cout << "���������: ";
		for (int i = 0; i < 8; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		cout << "������������: ";
		for (int i = 0; i < 8; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	break;

	case 4:
		/*4.	��� ������ ����� �����. ��������:
		a.	�������� �� s-� ������� ������� ������������� ������
		b.	�������� �� k-� ������� ������� ������ ������
		c.	����� ������� ������� ������: k-� ��� s-�.*/
	{
		const int size = 10;
		int a[size], s, k;
		cout << "������� s= ";
		cin >> s;
		cout << " ������� k= ";
		cin >> k;
		for (int i = 1; i <= size; i++)
		{
			a[i] = rand() % 10 - 5;
			cout << i << "-� ������� " << "[ " << a[i] << " ]" << endl;

		}
		cout << endl;
		if (a[s] > 0)
		{
			cout << s << "-� ������� ������� �������� ������������� ������" << endl;
		}
		else cout << s << "-� ������� ������� �������� ������������� ������" << endl;
		if (a[k] % 2 == 0)
		{
			cout << k << "-� ������� ������� �������� ������ ������" << endl;
		}
		else cout << k << "-� ������� ������� �������� �������� ������" << endl;
		if (a[s] > a[k])
		{
			cout << s << "-� ������� ������� ������" << endl;
		}
		else cout << k << "-� ������� ������� ������" << endl;

	}
	break;

	case 5:
		/*5.��� ������. ��� ��� ��������:
		a.	��������� �� 20
		b.	�������� �� ��������� �������
		c.	��������� �� ����� �.*/
	{
		const int size = 10;
		int a[size], a1[size], a2[size], a3[size], b;
		cout << "������� ����� �: ";
		cin >> b;

		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 50 + 1;
			cout << " " << a[i] << " ";
		}
		cout << endl;
		cout << "��������� �� 20    �������� �� ��������� �������    ��������� �� ����� �" << endl;
		for (int i = 0; i < size; i++)
		{
			a1[i] = a[i] - 20;

			a2[i] = a[i] * a[size - 1];

			a3[i] = a[i] + b;
			cout << "\t" << a1[i] << "\t\t\t\t" << a2[i] << "\t\t\t\t\t\t\t\t\t\t\t\t" << a3[i] << endl;
		}

	}
	break;

	case 6:
		/*6.��� ������. ������� �� ����� ������� ��� ��������������� ��������, ����� �������������*/
	{
		const int size = 10;
		int a[size], i;
		for (i = 0; i < size; i++)
		{
			a[i] = rand() % 10 - 5;
			cout << "[" << a[i] << "]" << " ";
		}
		cout << endl;
		cout << "������������� ��������: ";
		for (i = 0; i < size; i++)
		{
			if (a[i] > 0) { cout << a[i] << " "; }
		}
		cout << endl;
		cout << "������������� ��������: ";
		for (i = 0; i < size; i++)
		{
			if (a[i] < 0) { cout << a[i] << " "; }
		}cout << endl;
	}
	break;

	case 7:
		/*7.� ������� �������� ���������� � ���������� �����, ���������� 20
		����������� ���������. ���������� ������ ������, ������� ������ ���� �����.*/
	{
		const int size = 20;
		int a[size], i;
		for (i = 0; i < size; i++)
		{
			a[i] = rand() % 5 + 1;
			cout << i + 1 << "-� ������� - " << a[i] << " �����" << endl;
		}
		cout << endl;
		cout << "������ ������, ������� ������ ���� �����:" << endl;
		for (int i = 0; i < size; ++i)
			if (a[i] < 3)
			{
				cout << "\t" << i + 1 << "-� " << endl;
			}
	}
	break;

	case 8:
		/*8.������ ������, ��������� �� 14 ��������� ������ ����. ����� ����������
		��������� ������ �� ��������.*/
	{
		const int size = 14;
		int a[size], count = 0;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 100 + 50;
			cout << a[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < size; ++i)
			if (a[i] % 2 == 0)
			{
				count++;
			}
		cout << "���������� ������ ��������� = " << count << endl;

	}
	break;

	case 9:
		/*9.������ ������, ��������� �� 12 ��������� ������ ����. �������� ����� ������, ������� �������� ������
		�������� �������������������� ��������� �������*/
	{
		const int size = 12;
		int a[size];
		float a1[size], sum = 0;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 100 + 50;			
			cout << i + 1 << " " << "[" << a[i] << "]" << endl;
			a1[i] = a[i];
			sum += a[i];			
		}
		a1[4] = sum / size;
		cout << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i+1<< "["<< a1[i] <<"]"<< endl;
		}
		
			
	}
	break;

	case 10:
		/*10.����� ������, ��������� �� 15 ��������� ������������� ����. ���������� ���������� ���������, ��������
		������� ������ ������� ��������*/
	{
		const int size = 15;
		float a[size];
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			a[i] = rand() % 50 * 0.25;	
			cout << i+1<< " - ["<<a[i]<<"]" << endl;
		if (a[i] > a[0])
		{
			sum++;
		}
		}
		cout << endl;
		cout << "���������� ���������, �������� ������� ������ ������� �������� = "<< sum<< endl;
		cout << endl;
	}
	break;
	default: {
		cout << "������� � ����� ������� �� ����������" << endl;
	}}goto start;
	system("pause");
	return(0);
	
}