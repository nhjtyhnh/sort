#include<stdio.h>
#include "BubbleSort.h"
#include "fast_sort.h"
#include "select_sort.h"
#include "insert_sort.h"

int main() {
	printf("=====√∞≈›≈≈–Ú=====\n");
	int a[] = { 5,3,8,1,9 };
	int n = 5;
	bubble_sort(a, n);
	for (int i = 0;i < n;i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("=====øÏÀŸ≈≈–Ú=====\n");
	int a1[] = { 5,3,8,1,9 };
	int n1 = 5;
	fast_sort(a1, 0, n1 - 1);
	for (int i = 0;i < n1;i++) {
		printf("%d ", a1[i]);
	}
	printf("\n=====—°‘Ò≈≈–Ú=====\n");
	int b[] = { 5, 3, 8, 1, 9 };
	int n2 = 5;
	select_sort(b, n2);
	for (int i = 0;i < n2;i++) {
		printf("%d ", b[i]);
	}
	printf("\n=====≤Â»Î≈≈–Ú=====\n");
	int c[] = { 5,3,8,1,9 };
	int n3 = 5;
	insert_sort(c, n3);
	for (int i = 0;i < n;i++) {
		printf("%d ", c[i]);
	}
	return 0;
}