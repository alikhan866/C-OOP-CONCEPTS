/*
1. A friend function of a class is defined outside the scope of the class
2. A friend function has the rights to access all private and protected members of a class
3. Prototype should be included in the body of the class but definiton should be outside
Why we need friend functions ?

1. When class's private data needs to be accessed directly
without using object of that class
2.Operator overloading
*/
#include<iostream>
using namespace std;

class Distance {
    private:
        int meters;
    public:
        Distance() {
            meters =0;
        }
        void displayData () {
            cout << "Meters value: " << meters<<endl;
        }
        //prototype or signature of friend function
        friend void addValue(Distance &d);
        //why &d why not just d
        //because if we want to change the value we need to pass
        //the referennce of it and not just value 
};

void addValue (Distance &d) {
    d.meters = d.meters + 5;
}

int main() {
    Distance d1;    
    d1.displayData();   //meters = 0
    addValue(d1); // pass by reference // friend function call 
    d1.displayData();   //meters = 5
    return 0;
}