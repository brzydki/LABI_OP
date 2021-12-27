#include <iostream>
#include <ctime>
#include <stdio.h>
using namespace std;
#define N 3
#define R 10

void iniz(int *begin, int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			*begin = rand() % R - R / 2;
			begin++;
		}


	}
}

void print_array(int *beg, int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << *beg << '\t';
			beg++;
		}
		cout << '\n';
	}
}

void task(int *beg, int *end, int n, int *ans_min, int *ans_max) {
	int k = 0;
	//cout << *ans_min;
	for (int j = 0; j < n; ++j) {
		for (int *i = beg + k * n; i < beg + k * n + k + 1; ++i) {
			//cout << *i << '\t';
			if (*i > *ans_max) *ans_max = *i;
			if (*i < *ans_min) *ans_min = *i;
		}
		k++;
		//cout << '\n';
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int array[N][N];
	int ans_min = R, ans_max = -R;

	cout << "Массив " << '\n';
	iniz(&array[0][0], N);
	print_array(&array[0][0], N);

	cout << "Ответ" << '\n';
	task(&array[0][0], &array[N - 1][N - 1], N, &ans_min, &ans_max);
	cout << ans_min << " " << ans_max;


	return 0;
}
