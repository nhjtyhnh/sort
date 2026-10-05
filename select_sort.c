#include<stdio.h>
#include "select_sort.h"

void exchange1(int *x,int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void select_sort(int b[], int n2) {
	for (int i = 0;i < n2 - 1;i++) {
		int min = i;
		for (int j = i+1;j < n2;j++) {
			if (b[min] > b[j]) {
				min = j;
			}
		}
		exchange1(&b[i], &b[min]);
	}
}