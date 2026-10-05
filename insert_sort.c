#include<stdio.h>

void insert_sort(int c[], int n3) {
	for (int i = 1;i < n3;i++) {
		int key = c[i];
		int j = i - 1;
		while (j >= 0 && c[j] > key) {
			c[j + 1] = c[j];
			j--;
		}
		c[j + 1] = key;
	}
}