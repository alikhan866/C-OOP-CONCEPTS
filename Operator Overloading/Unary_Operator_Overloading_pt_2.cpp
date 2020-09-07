/*
This supports obj++ , ++obj , obj = obj1++; etc
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

    Weight operator ++(){
        Weight temp;
        temp.kg = ++kg;
        return temp;
    }

    Weight operator ++(int) {
        Weight temp;
        temp.kg=kg++;
        return temp;
    }

    Weight operator --(){
        Weight temp;
        temp.kg = --kg;
        return temp;
    }

    Weight operator --(int) {
        Weight temp;
        temp.kg = kg--;
        return temp;
    }

};

int main () {

    Weight obj1,obj2;
    obj2 = ++obj1;
    obj2.printWeight();
    return 0;
}
