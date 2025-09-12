/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

class Vehicle{
public:
//default values
int no_of_tyres=4;
string brand="XYZ";
string color="Black";
};

class Car:public Vehicle{
public:
string model;
Car(string b,string c,string m){
    brand=b;
    color=c;
    model=m;
}
void Specification(){
    cout << "Brand: " << brand << endl;
    cout << "Color: " << color << endl;
    cout << "Model: " << model << endl;
}
};
int main(){
cout<<"Type Car Brand, Color and Model:" << endl;
string b,c,m;
cin >> b >> c >> m;
Car c1(b,c,m);
c1.Specification();
}
/*
Output:
Type Car Brand, Color and Model:
Ford
Red
Mustang
Brand: Ford
Color: Red
Model: Mustang
*/