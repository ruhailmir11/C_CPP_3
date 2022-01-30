# include <iostream>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	float x, y;
	std::cout << "\nEnter x y coordinate pair seperated by a space : ";
	std::cin >> x >> y;

	if ( x > 0 && y > 0){
		std::cout << "Quadrant I \n";
	} else if ( x < 0 && y > 0  ){
		std::cout << "Quadrant II \n";
	} else if ( x < 0 && y < 0  ){
		std::cout << "Quadrant III \n";
	} else if ( x > 0 && y < 0 ){
		std::cout << "Quadrant IV \n";
	} else if ( x == 0.0 && y != 0){
		std::cout << "On Y axis \n";
	} else if ( y == 0.0 && x != 0){
		std::cout << "On X axis \n";
	} else {
		std::cout << "Invalid coordinates supplied !";
		exit(0);
	}

	return 0;
}
