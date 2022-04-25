#include <iostream>

class Vehicle {
    public:
        int wheels = 0;
};

class TwoWheeler : public Vehicle {
    public:
        bool turboBoost;
        TwoWheeler(): turboBoost(true){
            wheels = 2;
        }
};

class TwoWheelerAuto : public TwoWheeler {
    public:
        bool autoMode;
        TwoWheelerAuto(): autoMode(true){
            turboBoost = false;
        }
};

int main() {
    TwoWheeler v1;
    std::cout << "Two Wheeler \n";
    std::cout << "Wheels: " << v1.wheels << "\n";
    std::cout << "Boost: " << (v1.turboBoost ? "yes" : "no") << "\n";
    
   TwoWheelerAuto v2;
   std::cout << "\nTwo Wheeler Auto \n";
   std::cout << "Wheels: " << v2.wheels << "\n";
   std::cout << "Boost: " << (v2.turboBoost ? "yes" : "no") << "\n";
   std::cout << "AutoMode: " << (v2.autoMode ? "yes" : "no") << "\n";

    return 0;
}
