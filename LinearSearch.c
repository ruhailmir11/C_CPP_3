#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define TO_SEARCH 8
#define NOT_FOUND -1

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	int A[MAX];
	srand( time(0) );
	// Populating the array with random data (EVERY TIME !!!).
	printf("CURRENT DATA : \n");
	for ( int i = 0; i < MAX; i++ ){
		A[i] = (rand() % MAX) + 1;
		printf("%d ", A[i]);
	}
	
	printf("\n\nSEARCH RESULT: ");
	// Linear search
	// Searching for element [8];
	
	int index = NOT_FOUND;
	for( int i = 0; i < MAX; i++ ){
		if ( A[i] == TO_SEARCH )
			index = i;
	}
	
	if ( index != NOT_FOUND ){
		printf("%d is found at index %d\n", TO_SEARCH, index);
	} else {
		printf("%d is not in the data !\n", TO_SEARCH, index);
	}
	
	return 0;
}

