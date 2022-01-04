#include <stdio.h>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	int a, b, c;
	printf("Enter three numbers seperated by spaces : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if ( a > b && a > c ){
		printf("%d is greter\n", a);
	} else if ( b > c ) {
		printf("%d is greter \n", b);
	} else {
		printf("%d is greater \n", c);
	}
	
	return 0;
}
