#include <iostream>
using namespace std;

class MyClass {
private:
    int number;
    string name;

public:
  
    MyClass() {
        number = 0;    
        name = "Unknown"; 
    }

    void display() {
        cout << "Number: " << number << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
  
    MyClass obj;

    obj.display();

    return 0;
}
