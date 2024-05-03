#include<iostream>
using namespace std;

// fcntion prototype 
//functionn typ e name (argument type)
int sum ( int a , int b );

int main(){
   int num1, num2;
   cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // num 1 and num 2 are actual parameters
    cout<< "The sum of two numbers is: " << sum(num1, num2) << endl;
    return 0;
} 
    int sum( int a , int b){
      // a and b are taking value from actual parameters num 1 and num 2;
        int c = a+b;
        return c;
    }

    // formal paramerters
    