#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

#define MAX(X,Y) (((X)>(Y))?(X):(Y))

int maxDigit(int n) {
	if (n / 10 == 0)
		return n % 10;
	return MAX(n % 10, maxDigit(n / 10));
}

template<typename T>
void printArray(T *ptr, int size) {
	for (int i = 0; i < size; i++) {
		cout << *ptr << endl;
		ptr++;
	}
}

void fillArray(int *ptr, int size) {
	for (int i = 0; i < size; i++) {
		*ptr = i;
		ptr++;
	}
}

void xxx(int a, int b, int &sum) {
	sum = a + b;
}

void copy(char *s, char *t, int size) {
	for (int i = 0; i < size; i++) {
		*t = *s;
		s++;
		t++;
	}
}

/*
 * Напишите программу инвертирования одномерного массива с использованием указателей
 */
template<typename T>
void invertArray(T *ptr, int size) {
	T *left = ptr;
	T *right = ptr + size - 1;
	T t { };
	for (int i = 0; i <= size / 2; i++) {
		t = *left;
		*left = *right;
		*right = t;
		left++;
		right--;
	}
}

/*
 * Дан одномерный массив. Определить сколько среди элементов массива отличных
 * от последнего элемента. Использовать указатели.
 */
template<typename T>
void compareWithLast(T *ptr, int &sum, int size) {
	T last { *(ptr + size - 1) };
	for (int i = 0; i < size - 1; i++) {
		if (*ptr != last)
			sum++;
		ptr++;
	}
}

int main() {
	char h[5] { 'H', 'e', 'l', 'l', 'l' };
	char c[5] { };
	copy(h, c, 5);
	invertArray(c, 5);
	printArray(h, 5);
	printArray(c, 5);
	int s { };
	compareWithLast(h, s, 5);
	cout << s << endl;
	return 0;
}
