#include <iostream>
using namespace std;
class complex{
    int a , b; 
    public:
    // creating a constructor
    // constructor is a special member function with the same name as of the class
    // it is used to initialize the objects of its class
    // it is automatically called when the object is created
    // it is used to allocate the resources to the object of its class
    complex(void); // constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void){ // constructor definition, this is the default constructor as it takes no parameters
    a=10;
    b=20;
}
int main (){
    complex c;
    c.printNumber();
    
    return 0;
}

//properties of constructor
// 1. it should be declared in the public section of the class
// 2. they are automatically invoked whenever the object is created
// 3. they cannot return values and do not have return types
// 4. it can have default arguments
// 5. we cannot refer to their address
// 6. we cannot have more than one constructor in a class
// 7. they can have default arguments
// 8. they can be overloaded
// 9. they can be used to allocate resources
// 10. they can be used to initialize the objects
// 11. they can be used to do any other processing required when an object is created
// 12. they can be used to initialize the objects of its class
// 13. they can be used to allocate the resources to the object of its class
// types of constructor
// 1. default constructor
// 2. parameterized constructor
// 3. copy constructor
// 4. dynamic constructor
// 5. delete constructor
// 6. explicit constructor
// 7. friend constructor
// 8. inline constructor
// 9. mutable constructor
// 10. nothrow constructor
// 11. static constructor
// 12. thread_local constructor
// 13. virtual constructor
// 14. volatile constructor
// 15. constexpr constructor
// 16. const constructor

