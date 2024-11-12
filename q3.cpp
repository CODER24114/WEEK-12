#include <iostream>
#include <cmath> 
using namespace std;

class Triangle {
private:
    double base, height; 

public:
 
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    
    double hypo() {
        return sqrt(base * base + height * height); 
    }

    double area() {
        return 0.5 * base * height; 
    }
};

int main() {
    double base, height;
  
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    Triangle t(base, height);

    cout << "The hypotenuse of the triangle is: " << t.hypo() << endl;
    cout << "The area of the triangle is: " << t.area() << endl;

    return 0;
}
