#include <iostream>
using namespace std;

int sum ( float a , int b ){
    cout<<"using function with two arguments";
    return a+b;
}
int sum ( int a , int b , int c){
    cout<<"using function with three arguments";
    return a+b+c;
}
// calculte the volume fo the cylinder
int volume( double r, int h){
    return (3.14*r*r*h);
}
// calculte the volume fo the cube
int volume ( int a ){
    return a*a*a;
}
// calculate the value of the rectangle
int volume( int l , int b , int h){
    return ( l*b*h);
};

int main (){
    cout<< " the volume of the cube is "<<volume(3)<<endl;
    cout<< " the volume of the rectangle is "<<volume(3, 2, 3)<<endl;
    cout<< " the volume of the cylinder is "<<volume(2,3)<<endl;

      cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
      cout<<"the sum of 3, 6 , 2 is "<<sum(3,6,2)<<endl; 
}