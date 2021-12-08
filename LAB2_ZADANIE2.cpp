#include <time.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <clocale>

using namespace std;


const int N = 8;
const int L = 4;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Элементы массива: \n";
	int A[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = rand() % 33 + 99;

			cout << setw(3) << A[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	cout << "Оставшиеся элементы заштрихованной области: \n";
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((i < N / 1 && (i >= j)))
			{

				sum += A[i][j];

				cout << setw(3) << A[i][j] << " ";
			}
			else
			{
				cout << setw(3) << "+" << " ";
			}
		}
		cout << "\n";
	}
	cout << "Их сумма = " << sum << "\n";
	int sum2 = 0;
	int B[L];
	int z = 0;
	cout << "Сумма элементов нечетных столбцов:";
	for (int a = 0; a < 8; a += 2)
	{

		for (int b = 0; b < 8; b++)
		{
			sum2 += A[a][b];
		}
		B[z] = sum2;
		sum2 = 0;
		z++;
	}
	for (int k = 0;k < 4;k++)
	{
		
		cout << B[k] << " ";
	}
	return 0;
}