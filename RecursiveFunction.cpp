# include <iostream>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int f ( int x ){
	if ( x == 0 )
		return 0;
		
	return f(x-1) + 2;
}

int main(){
	std::cout << "Test 1: F(0), expected: 0" << "\n";
	std::cout << f(0) << "\n\n";
	
	std::cout << "Testing from 1..10" << "\n";
	for ( int i = 1; i <= 10; i++ )
		std::cout << i <<" : " << f(i) << "\n";
		
	/*
		Its evident from the above ouput that
		this function generates a set of even
		numbers.
	*/
	
	return 0;
}