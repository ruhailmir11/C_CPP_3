# include <stdio.h>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

# define SPECIAL_START 33
# define NUM_START 48
# define SPECIAL_2_START 58
# define UPPER_START 65
# define SPECIAL_3_START 91
# define LOWER_START 97
# define SPECIAL_4_START 123
# define SPECIAL 16
# define SPECIAL_2 7
# define SPECIAL_3 6
# define SPECIAL_4 4
# define LETTERS 26
# define NUM 10

int main(){
	char input;
	printf("Enter a character : ");
	scanf("%c", &input);
	
	if ( input >= SPECIAL_START && input < (SPECIAL_START+SPECIAL )){
		printf("%c is a special character\n", input);
	} else if ( input >= SPECIAL_2_START && input < (SPECIAL_2_START+SPECIAL_2) ){
		printf("%c is a special character\n", input);
	} else if ( input >= SPECIAL_3_START && input < (SPECIAL_3_START+SPECIAL_3) ){
		printf("%c is a special character\n", input);
	} else if ( input >= SPECIAL_4_START && input < (SPECIAL_4_START+SPECIAL_4) ){
		printf("%c is a special character\n", input);
	} else if ( input >= NUM_START && input < (NUM_START+NUM) ){
		printf("%c is a numeric character\n", input);
	} else if ( input >= UPPER_START && input < (UPPER_START+LETTERS) ){
		printf("%c is an uppercase letter \n", input);
	} else if ( input >= LOWER_START && input < (LOWER_START+LETTERS) ){
		printf("%c is a lowercase letter \n", input);
	} else {
		printf("Sorry, %c can not be recognised \n", input);	
	}
	
	return 0;
}
