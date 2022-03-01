# include <iostream>

class Swap {
	private:
		int a, b;

	public:
		Swap(int x, int y): a(x), b(y){}

		void printSwapped(){
			std::cout << "\nBefore Swapping \n";
			std::cout << "A : " << a << ", B: " << b << "\n";

			a = a ^ b;
			b = a ^ b;
			a = a ^ b;

			std::cout << "After Swapping \n";
			std::cout << "A : " << a << ", B: " << b << "\n";
		}
};

int main(){
	Swap s1(20, 10);
	s1.printSwapped();

	Swap s2(-5, 9);
	s2.printSwapped();

	return 0;
}
