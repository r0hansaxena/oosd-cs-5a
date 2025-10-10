//method overloading 
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    int x, y;
    float p, q;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Sum of integers = " << c.add(x, y) << endl;
    cout << "Enter two floats: ";
    cin >> p >> q;
    cout << "Sum of floats = " << c.add(p, q) << endl;
    return 0;
}
