#include <iostream>
#include <limits.h>

class Largest {
	private:
		int nums[3];

	public:
		Largest(int x, int y, int z){
			nums[0] = x;
			nums[1] = y;
			nums[2] = z;
		}

		void printLargest(){
			int greater = INT_MIN;
			for( int i = 0; i < 3; i++ )
				if ( nums[i] > greater )
					greater = nums[i];
			std::cout << "Greater of three : " << greater << "\n";
		}
};

int main(){
	Largest l1(1, 5, 2);
	l1.printLargest();

	Largest l2(-1, -9, -2);
	l2.printLargest();
	
	return 0;
}