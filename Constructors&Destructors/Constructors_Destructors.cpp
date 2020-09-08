#include<iostream>
#include<string>

using namespace std;

class Cars {

private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;
public:
    //default constructor
    Cars () {
        company_name = "Toyota";
    }
    //parameterized constructor
    Cars (string cname,string mname,string ftype,float m ,double p) {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    //copy constructor

    Cars (Cars &obj) {
        // We are creating an object of Cars
        // using another object of Cars
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }

    //Destructor
    ~Cars() {
        cout << "Destructor called"<<endl; // no of calls == no of objects
    }

    void displayData() {
        cout << "Car properties" << endl;
        cout << "Car Company Name - " << company_name << endl;
        cout << "Car Company Model - " << model_name << endl;
        cout << "Car Fuel Type - " << fuel_type << endl;
        cout << "Car Mileage - " << mileage << endl;
        cout << "Car Price - " << price << endl << endl;
    }
};

int main() {

    Cars car1,car2("Toyota","Fortuner","Diesel",10,3500000);

    //car1.setData("toyota","altis","petrol",15.5,1500000);
    //car1.displayData();

    Cars car3 = car2;
    car2.displayData();
    car3.displayData();

    return 0;
}

