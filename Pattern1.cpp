# include <iostream>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	int R = 0;
	std::cout << "Enter # no Rows : ";
	std::cin >> R;
	
	for( int i=0; i <= R; i++ ){
		for( int _=0; _ < i; _++ ){
			std::cout << "X";
		}
		std::cout << "\n";
	}
	
	return 0;
}
