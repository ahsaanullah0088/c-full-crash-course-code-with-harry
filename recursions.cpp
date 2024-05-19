#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
// step by step calculationn of factorial(4)
// factorial(4) = 4 * factorial(3)
// factorial(3) = 3 * factorial(2)
// factorial(2) = 2 * factorial(1)

int main(){
    // factorial of a number
    // 4! = 4*3*2*1 = 24
    // 0! = 1
    // 1! = 1
    // n! = n * (n-1)!
    // n! = n * (n-1) * (n-2) * ... * 1
    // just like this
    cout << "The factorial of 4 is " << factorial(4) << endl;
    return 0;
}

// recursion use fibonacci series
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
// fib(n) = fib(n-1) + fib(n-2)
// fib(0) = 0
// fib(1) = 1
// fib(2) = fib(1) + fib(0) = 1 + 0 = 1
// fib(3) = fib(2) + fib(1) = 1 + 1 = 2
// fib(4) = fib(3) + fib(2) = 2 + 1 = 3
// fib(5) = fib(4) + fib(3) = 3 + 2 = 5
// fib(6) = fib(5) + fib(4) = 5 + 3 = 8
// fib(7) = fib(6) + fib(5) = 8 + 5 = 13
// fib(8) = fib(7) + fib(6) = 13 + 8 = 21
// fib(9) = fib(8) + fib(7) = 21 + 13 = 34
// fib(10) = fib(9) + fib(8) = 34 + 21 = 55
// fib(11) = fib(10) + fib(9) = 55 + 34 = 89
// fib(12) = fib(11) + fib(10) = 89 + 55 = 144
// fib(13) = fib(12) + fib(11) = 144 + 89 = 233
// fib(14) = fib(13) + fib(12) = 233 + 144 = 377
// just like this
// Path: recursions.cpp