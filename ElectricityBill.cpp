#include <iostream>

class Bill {
	private:
		float units;
		
	public:
		Bill(float u): units(u){};

		void printBill(){
			float rate;
			if( units <= 0 || units >= 1000 ){
				std::cout << "\nUnits must be between 0 and 1000 !\n";
				return;
			}
			if( units <= 100 ){
				rate = 3.0;
			} else if ( units <= 500 ){
				rate = 5.0;
			} else {
				rate = 10.0;
			}

			float total = (units * rate);

			std::cout << "\nUnits Consumed : " << units << "\n";
			std::cout << "Bill total: " << total << "\n";
		}
};

int main(){
	Bill b1( 535 );
	b1.printBill();

	Bill b2( 735 );
	b2.printBill();

	return 0;
}
