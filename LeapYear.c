# include <stdio.h>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	int year;
	printf("Enter the year : ");
	scanf("%d", &year);
	
	if ( year % 400  == 0 ){
		printf("%d is a leap year !\n", year);
	} else if ( year % 100 == 0 ){
		printf("%d is not a leap year !\n", year);
	} else if ( year % 4 == 0 ){
		printf("%d is a leap year !\n", year);
	} else {
		printf("%d is not a leap year !\n", year);
	}
	
	return 0;
}
