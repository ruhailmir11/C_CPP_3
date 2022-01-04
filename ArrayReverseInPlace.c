#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(A) / sizeof(A[0]);
	int mid = ceil(len / 2.0);
	
	printf("Array Before Reversing: \n", mid);
	for( int i=0; i < len; i++ ){
		printf("%d ", A[i]);
	}
	
	// Inplace reverse algorithm
	for(int i=0; i < mid; i++){
		int left = (i);
		int right = (len - i - 1);
		int tmp = A[left];
		A[left] = A[right];
		A[right] = tmp;
	}
	
	printf("\n\nArray After Inplace Reversing: \n", mid);
	for( int i=0; i < len; i++ ){
		printf("%d ", A[i]);
	}
	
	return 0;
}