/*
This supports obj++ , ++obj only and NOT assignment like obj = obj1++ etc
*/

#include<iostream>

using namespace std;

class Weight {

private:
    int kg;
public:

    Weight () {
        kg=0;
    }

    Weight(int x) {
        kg=x;
    }

    void printWeight() {
    cout << "Weight in KG : " <<kg << endl;
    }

    void operator ++(){
        ++kg;
    }

    void operator ++(int) {
        kg++;
    }

    void operator --(){
        --kg;
    }

    void operator --(int) {
        kg--;
    }

};

int main () {

    Weight obj;
    obj.printWeight();
    ++obj;  // ++ doesnt know what to do with obj type since it is user defined
    obj.printWeight();
    obj++; // obj.operator ++()
    obj.printWeight();
    return 0;
}
