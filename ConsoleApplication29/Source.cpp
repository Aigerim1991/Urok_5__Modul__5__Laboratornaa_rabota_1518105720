#include <stdio.h>
#include<locale.h>
#include<iostream>
#include<time.h>
using namespace std;
int G;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		cout << "Введите номер задания:" << endl;
		cin >> G;
		switch (G)
		{
		case 1:
		{
			int a[10], temp = 0;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Сортировка пузырьковый" << endl;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 9; j >= 0; j--)
				{
					if (a[j - 1] > a[j])
					{
						temp = a[j - 1];
						a[j - 1] = a[j];
						a[j] = temp;
					}
				}
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 2:
		{
			int a[10], min = 0, temp = 0;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Сортировка выбором" << endl;
			for (int i = 0; i < 9; i++)
			{
				min = i;
				for (int j = i + 1; j <10; j++)
				{
					if (a[j] < a[min])
						min = j;
				}
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 3:
		{
			int a[10];
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Сортировка вставками" << endl;
			for (int i = 1; i < 10; i++)
			{
				int value = a[i];
				int index = i;
				while ((index > 0) && (a[index - 1] > value))
				{
					a[index] = a[index - 1];
					index--;
				}
				a[index] = value;
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << "\t";
			}
			cout << endl;
		}

		break;
		default:
			break;
		}
	} while (G>0);
}