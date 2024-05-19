// //static function in inline functions
// #include <iostream>
// using namespace std;


// // Inline function to calculate the product of two numbers  which change the function call to the actual code
// inline int product(int a, int b, int c){
//     static // This executes only once
//     c=c+1; // Next time this function is run the value of c will be retained
//     return a * b +c;
// }
// int main(){
//     int a , b ;
//     cout << "Enter three numbers: ";
//     cin >> a >> b;
//     cout << "Product: " << product(a, b , << endl;
//     cout << "Product: " << product(a, b , c) << endl;
//     cout << "Product: " << product(a, b , c) << endl;
//     cout << "Product: " << product(a, b , c) << endl;
//     cout << "Product: " << product(a, b , c) << endl;
//     cout << "Product: " << product(a, b , c) << endl;
//     cout << "Product: " << product(a, b , c) << endl;
//     cout << "Product: " << product(a, b , c) << endl;
//     cout << "Product: " << product(a, b , c) << endl;

//     return 0;
// }


// Path: inlinefunctions.cpp

#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}
int main(){

    // int a , b ;
    // cout << "Enter the value of a and b: ";
    // cin >> a >> b;
    int money = 100000;
    cout<< "If you have " << money << " rupees in your bank account, you will receive " << moneyReceived(money) << " rupees after one year." << endl;
    return 0;
}