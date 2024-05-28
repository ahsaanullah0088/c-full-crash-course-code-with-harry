#include <iostream>
using namespace std;
class complex{
    int a , b;
    public:
    complex(int , int);
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};
complex :: complex(int x, int y){
    a=10;
    b=20;
}
int main (){
    // implicit call
    complex a(4,6) ;

    // explicit call
    complex a = complex(4,6);
    a.printNumber();
    return 0;
}