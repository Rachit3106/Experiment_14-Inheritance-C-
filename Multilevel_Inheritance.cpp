/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/

#include <iostream>
using namespace std;

class Vehicle{
    public:
    int no_of_tyres;
    string brand;
    void Function(){
        cout << "Take you from one place to another";
    }
};
class Car:public Vehicle{
    public:
    Car(string b){
        no_of_tyres=4;
        brand=b;
    }
};

class Ford:public Car{
    public:
    string name;
    Ford(string n):Car("Ford"){
        name=n;
    }
    void Display(){
        cout << "Car Name: " << name << "\n" << "Number of Tyres: " << no_of_tyres << "\n" << "Brand name: " << brand <<endl;
        cout << "Function : ";Function();
    }
};

int main(){
    Ford obj1("Mustang");
    obj1.Display();
}
/*
Output:-
Car Name: Mustang
Number of Tyres: 4
Brand name: Ford
Function : Take you from one place to another
*/
