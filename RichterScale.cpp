# include <iostream>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	float richterScaleNumber;
	std::cout << "Enter Richter scale number : ";
	std::cin >> richterScaleNumber;

	if ( richterScaleNumber < 5.0f ){
		std::cout << "Little or no damage.\n";
	} else if ( richterScaleNumber >= 5.0f && richterScaleNumber <= 5.5 ){
		std::cout << "Some damage.\n";
	} else if ( richterScaleNumber >= 5.5 && richterScaleNumber <= 6.5 ){
		std::cout << "Serious damage: walls may crack or fall 😨 .\n";
	} else if ( richterScaleNumber >= 6.5 && richterScaleNumber <= 7.5 ){
		std::cout << "Disaster: houses and buildings may collapse 😰 .\n";
	} else {
		std::cout << "Catastrophe: most buildings destroyed 😱 .\n";
	}

	// We can't use switch statement as it does not allow
	// the use of floating point numbers and
	// we cant check for multiple conditions or ranges
	// in switch statement. 


	return 0;
}
