# include <stdio.h>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	int A[] = { 6, 2, 9, 1, 5, 8, 5, 1, 2, 4, 8 };
	int len = sizeof(A) / sizeof(A[0]);
	
	printf("Data before sorting... :\n");
	for( int i=0; i < len; i++ ){
		printf("%d ", A[i]);
	}
	
	// Bubble sort algorithm
	for( int i=0; i < len; i++ ){
		for( int j=i+1; j < len; j++ ){
			if( A[i] > A[j] ){
				int tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
		}
	}
	
	printf("\n\nData after sorting... :\n");
	for( int i=0; i < len; i++ ){
		printf("%d ", A[i]);
	}
	
	return 0;
}
