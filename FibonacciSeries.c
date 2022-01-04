# include <stdio.h>
# include <stdint.h>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

typedef long long int T;

int main(){
	int N;
	printf("Generate series upto (terms) : ");
	scanf("%d", &N);
	
	T a = 1;
	T b = 1;
	
	for(int _ = 0; _ < N; _++){
		printf("%d ", a);
		T tmp = a;
		a = b;
		b = tmp + b;
	}
	
	return 0;	
}

