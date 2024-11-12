#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2, num3, num4; 

public:
    
    Calculator() {
        num1 = 0;
        num2 = 0;
        num3 = 0;
        num4 = 0;
    }

   
    Calculator(double a, double b, double c, double d) {
        num1 = a;
        num2 = b;
        num3 = c;
        num4 = d;
    }

    
    double add() {
        return num1 + num2 + num3 + num4;
    }

   
    double subtract() {
        return num1 - num2 - num3 - num4;
    }

    
    double multiply() {
        return num1 * num2 * num3 * num4;
    }

  
    double divide() {
        if (num2 == 0 || num3 == 0 || num4 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0; 
        }
        return num1 / num2 / num3 / num4;
    }

    
    void displayValues() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
        cout << "Number 3: " << num3 << endl;
        cout << "Number 4: " << num4 << endl;
    }
};

int main() {
  
    Calculator calc(10.5, 5.2, 2.5, 1.5);

    
    cout << "Values in the calculator:" << endl;
    calc.displayValues();

   
    cout << "\nAddition of values: " << calc.add() << endl;
    cout << "Subtraction of values: " << calc.subtract() << endl;
    cout << "Multiplication of values: " << calc.multiply() << endl;
    cout << "Division of values: " << calc.divide() << endl;

    return 0;
}
