#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 12
void heapify(int [], int, int);
void heapSort(int [], int);
void print(int array[]);
void swap(int *, int *);

int main() {
	int array[M] = {0, 2, 1, 3, 9, 10, 5, 4, 13, 15, 19, 20};
	heapSort(array, M);
	print(array);
	return 0;
}
void heapify(int array[M], int  n, int i) {
	int largest = i, l = 2 * i + 1, r = 2 * i + 2;
	
	if(l < n && array[l] > array[largest])
		largest = l;
	if (r < n && array[r] > array[largest])
		largest = r;
	if (largest != i) {
		swap(array + i, array + largest);
		heapify(array, n, largest);
	}
}
void heapSort(int array[M], int n) {
	for(int i = n / 2 - 1; i >= 0; i--) {
		heapify(array, n, i);
	}
	for(int k = n - 1; k >= 0; k--) {
		swap(array + 0, array + k);
		heapify(array, k, 0);
	}
}
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void print(int array[M]) {
	for (int i = 0; i < M; i++) {
		printf("%3d", array[i]);
	}
}