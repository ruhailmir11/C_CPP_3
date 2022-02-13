# include <stdio.h>
# include <string.h>
# include <stdlib.h>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int isVowel( char c ){
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	int N = sizeof(vowels) / sizeof(vowels[0]);
	for( int i=0; i < N; i++ ){
		if ( c == vowels[i] ){
			return 1;
		}
	}
	return 0;
}

int countVowels(char* s, int N){
	int count = 0;
	for( int i = 0; i < N; i++ ){
		if ( isVowel( s[i] ) )
			count++;
	}
	return count;
}

int main(){
	char *str = (char * ) malloc (sizeof(char) * 100);
	printf("Enter a word : ");
	scanf("%s", str);
	printf("%c has %d vowels\n", str, countVowels(str, strlen(str)));
	
	return 0;
}
