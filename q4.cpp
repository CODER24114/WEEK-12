#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count; 

public:
   
    ObjectCounter() {
        count++;
        cout << "Object created. Current object count: " << count << endl;
    }

    ~ObjectCounter() {
        count--;
        cout << "Object destroyed. Current object count: " << count << endl;
    }

    static int getObjectCount() {
        return count;
    }
};

int ObjectCounter::count = 0;

int main() {
    cout << "Main Block Start\n";
 
    ObjectCounter obj1;
    ObjectCounter obj2;

    {
        cout << "\nNested Block Start\n";

        ObjectCounter obj3;
        ObjectCounter obj4;

        cout << "\nNested Block End\n";
    }

    cout << "\nMain Block End\n";

    return 0;
}
