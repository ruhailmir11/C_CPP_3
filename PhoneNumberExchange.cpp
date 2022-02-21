#include <iostream>

struct Phone {
    int area_code;
    int exchange;
    int number;
};

int main() {
    // Write C++ code here
    Phone ph1;
    std::cout << "Enter Area Code : ";
    std::cin >> ph1.area_code;
    
    std::cout << "Enter Exchange : ";
    std::cin >> ph1.exchange;
    
    std::cout << "Enter Number : ";
    std::cin >> ph1.number;
    
    std::cout << "Printing ... ";
    std::cout << ph1.area_code << "\t" << ph1.exchange << "\t" << ph1.number << "\n";
    
    return 0;
}
