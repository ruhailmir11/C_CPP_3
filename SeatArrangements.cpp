# include <iostream>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

typedef unsigned long int T;

T fact ( T g, T c ){
	if ( c <= 0 ){
		return 1;
	}
	if ( g == 0 || g == 1 ){
		return 1;
	} else {
		return g * fact( g-1, c-1 );
	}
}

int main(){
	int chairs, guests;
	std::cout << "Enter # no guests : " << std::endl;
	std::cin >> guests;
	
	std::cout << "Enter # no chairs : " << std::endl;
	std::cin >> chairs;
	
	// Serious and Precise Calculations - HaHa???? ...
	T possible_arragnements = fact( guests, chairs );
	std::cout << possible_arragnements;
	
	return 0;	
}

