#include <iostream>
using namespace std;

class point{
    int x, y;
    public:
    point(int a=0, int b=0){
        x = a;
        y = b;
    }
    void display(){
        cout <<"The point is"<< x << " " << y << endl;
    }
};

int main (){
    point p1(1, 1);
    p1.display();
    point p2;
    return 0;
}