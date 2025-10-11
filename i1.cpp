//single inheritance

#include <iostream>
using namespace std;

class A {
public:
    void showA(){
         cout << "This is class A\n";
     }
};

class B : public A {
public:
    void showB(){ 
        cout << "This is class B\n"; 
    }
};

int main() {
    B obj;
    obj.showA();  
    obj.showB();  
}
