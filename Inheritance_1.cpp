#include <iostream>

class Shape {
    public:
        float width;
        float height;
};

class Rectangle : public Shape {
    public:
    Rectangle(float w, float h){
        width = w;
        height = h;
    };
    float area(){
        return width * height;
    }
};

class Square : Shape {
    public:
    Square(float side){
        width = side;
    }
    float area(){
        return width * width;
    }
};

class Triangle: Shape {
    public:
    Triangle(float b, float h){
        width = b;
        height = h;
    }
    float area(){
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle r(20, 30);
    std::cout << "Rectangle area: " << r.area() << "\n";
    
    Square s(20);
    std::cout << "Square area: " << s.area() << "\n";
    
    Triangle t(3.8, 5.5);
    std::cout << "Triangle area: " << t.area() << "\n";

    return 0;
}
