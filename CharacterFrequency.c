# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# define MAX 10

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

typedef char * string;

int main(){
	string input = (string) malloc ( sizeof(char) * MAX );
	printf("Enter a text ( MAX : 100 ): ");
	scanf("%s", input);
	int N = strlen(input);
	int freqs[N];
	
	for ( int i = 0; i < N; i++){
		freqs[i] = 0;
		int index = -1;
		for ( int j = 0; j < N; j++){
			if ( input[i] == input[j] ){
				index = j;
				break;
			}
		}
		freqs[index]++;
	}
	printf("\n");
	printf("%s\t\t%s","CHAR","FREQ\n");
	for( int i=0; i < N; i++){
		if ( freqs[i] != 0 ){
			printf("%c\t\t%d\n", input[i], freqs[i]);
		}
	}
	printf("\n");
	
	return 0;
}
