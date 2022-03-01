#include <iostream>


class Cube {
	private:
		float x, y, z;

	public:
		Cube(float a, float b, float c): x(a), y(b), z(c){}

		void printVolume(){
			if( x < 1 || y < 1 || z < 1 ){
				std::cout << "\nNo dimension can be zero !\n";
				return;
			}

			float volume = x * y * z;

			std::cout << "\nVolume: " << volume << "\n";
		}
};

int main(){
	Cube c1(10, 20, 30);
	c1.printVolume();

	Cube c2(10, 14, 0);
	c2.printVolume();

	return 0;
}