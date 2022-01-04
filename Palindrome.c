# include <stdio.h>
# include <string.h>
# include <stdlib.h>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

typedef char * string;

int main(){
	string input = (string) malloc (sizeof(char) * 50);
	string rev = (string) malloc (sizeof(char) * 50);
	printf("Enter a word : ");
	scanf("%s", input);
	strcpy(rev, input);
	strrev(rev);
	
	if ( strcmp(input, rev) == 0 ){
		printf("%s is a palindrome !\n", input);
	} else {
		printf("%s is not a palindrome !\n", input);
	}
	
	return 0;
}
