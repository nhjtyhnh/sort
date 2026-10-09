#include<stdio.h>

void exchange(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void fast_sort(int a1[], int left, int right) {
	if (left >= right) {
		return;
	}
	int pivot = a1[left];
	int k = left;
	for (int i = left+1;i <= right;i++) {
		if (a1[i] < pivot) {
			k++;
			if(k!=i){
				exchange(&a1[i], &a1[k]);
			}
		}
	}
	exchange(&a1[left], &a1[k]);
	fast_sort(a1, left, k - 1);
	fast_sort(a1, k + 1, right);
}
