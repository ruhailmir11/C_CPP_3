# include <iostream>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	float weightPounds, heightInches;
	std::cout << "Enter your weight ( pounds ) : ";
	std::cin >> weightPounds;

	std::cout << "Enter height ( inches ) : ";
	std::cin >> heightInches;

	float BMI = (703.0f * weightPounds) / heightInches;

	if ( BMI < 18.5f ){
		std::cout << "Under weight\n";
	} else if ( BMI >= 18.5f && BMI <= 24.9f ){
		std::cout << "Normal\n";
	} else if ( BMI >= 25.0f && BMI <= 29.9 ){
		std::cout << "Overweight 😨 \n";
	} else {
		std::cout << "Obese 😱 \n";
	}

	return 0;
}
