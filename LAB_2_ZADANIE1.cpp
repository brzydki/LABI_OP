#include <time.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, j, sum = 0;
	cout << "Введите размер массива"; 
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100 - 60 ;
		cout << setw(3) << arr[i] << "  ";
	}
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			j = i;
			j++;
		}
	}
	for (int i = j; i < n; i++) {
		sum += arr[i];
	}
	cout << "\nМаксимальный элемент: " << max << endl;
	cout << "Сумма элементов массива, стоящих после максимального элемента: " << sum << endl;
	return 0;
}