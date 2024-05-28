#include <iostream>
using namespace std;

class c2; // Forward declaration of class c2

class c1 {
    int val;
    friend void exchange(c1 &, c2 &); // Friend function declaration
public:
    void indata(int a) {
        val = a;
    }
    void display() {
        cout << val << endl;
    }
};

class c2 {
    int val;
    friend void exchange(c1 &, c2 &); // Friend function declaration
public:
    void indata(int a) {
        val = a;
    }
    void display() {
        cout << val << endl;
    }
};

// Friend function to exchange values of c1 and c2
void exchange(c1 &x, c2 &y) {
    int temp = x.val;
    x.val = y.val;
    y.val = temp;
}

int main() {
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    
    cout << "Value of c1 before exchange: ";
    oc1.display();
    
    cout << "Value of c2 before exchange: ";
    oc2.display();
    
    exchange(oc1, oc2);
    
    cout << "Value of c1 after exchange: ";
    oc1.display();
    
    cout << "Value of c2 after exchange: ";
    oc2.display();

    return 0;
}
