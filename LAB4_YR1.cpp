#include <iostream>
#include <ctime>
#include <stdio.h>
using namespace std;
#define N1 4
#define N2 6
#define R 100

void iniz(int *begin, int n) {
	for (int i = 0; i < n; ++i) {
		*begin = rand() % R;
		begin++;

	}
}

void print_array(int *beg, int *end, int k) {
	for (int *i = beg, j = 0; i <= end; i++, j++) {
		cout << *i;
		if ((j + 1) % k == 0) cout << "\n";
		else cout << '\t';
	}
}

int* max_arr(int *beg, int *end) {
	int *ind_max = beg;
	for (int *i = beg + 1; i < end; ++i) {
		if (*i > *ind_max) ind_max = i;
	}
	return ind_max;
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int array1[N1];
	iniz(&array1[0], N1);
	cout << "Вывод массива: " << endl;
	print_array(&array1[0], &array1[N1 - 1], N1);

	int array2[N2];
	iniz(&array2[0], N2);
	cout << "Вывод массива: " << endl;
	print_array(&array2[0], &array2[N2 - 1], N2);

	int *max_arr1, *max_arr2;
	max_arr1 = max_arr(&array1[0], &array1[N1 - 1]);
	max_arr2 = max_arr(&array2[0], &array2[N2 - 1]);

	cout << "Максимальный элемент в первом массиве: " << *max_arr1 << '\n';
	cout << "Максимальный элемент во втором массиве: " << *max_arr2 << '\n';

	if (max_arr1 - &array1[0] < max_arr2 - &array2[0]) cout << "Максимальный элемент первого массива находится ближе к началу" << '\n';
	else if (max_arr1 - &array1[0] < max_arr2 - &array2[0]) cout << "Максимальный элемент второго массива находится ближе к началу" << '\n';
	else cout << "Максимальные элементы массивов находятся на одинаковом расстоянии" << '\n';

	return 0;