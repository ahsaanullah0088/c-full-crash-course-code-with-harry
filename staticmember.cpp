#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setData(){
        cout<<"Enter the id of the employee: ";
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"The id of the employee is: "<<id<<endl;
        cout<<"The count is: "<<count<<endl;
    }
    static void getCount(){
        // cout<<id; // throws an error
        cout<<"The value of count is: "<<count<<endl;
    }
};

int Employee::count = 1000; // Default value of count is 0  // This is how we initialize the static member of a class

int main (){
    Employee harry , rohan , lovish;
    harry.setData();
    harry.getData();
    Employee::getCount();
    rohan.setData();
    rohan.getData();
    Employee::getCount();
    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}