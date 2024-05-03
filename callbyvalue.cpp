#include < iostream>
using namespace std;
    // int sum ( int a , int b){
    //     int c = a+b;
    //     return c;
    // }
 void swap ( int a ; int b){
        int temp = a;
        a = b;
        b = temp;
    }
int main(){
  int a = b , b = 5;
  cout<< "The value of a is: " << a << " and the value of b is: " << b << endl;
    swap(a, b);
  cout<< "The value of a is: " << a << " and the value of b is: " << b << endl;

    return 0;
}