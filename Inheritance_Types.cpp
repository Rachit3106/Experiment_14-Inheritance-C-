#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;

protected:
    int maxSpeed;

private:
    int engineNumber;

public:
    Vehicle(string b, int speed, int engNum) {
        brand = b;
        maxSpeed = speed;
        engineNumber = engNum;
    }

    void showEngineNumber() {
        cout << "Engine Number: " << engineNumber << endl;
    }
};

class Car : protected Vehicle {
public:
    int wheels;

    Car(string b, int speed, int engNum, int w) : Vehicle(b, speed, engNum) {
        wheels = w;
    }

    void showDetails() {
        cout << "Brand: " << brand << endl;        
        cout << "Max Speed: " << maxSpeed << endl; 
        cout << "Wheels: " << wheels << endl;
    }

    void showEngine() {       
        showEngineNumber();   
    }
};

int main() {
    Car c("Toyota", 180, 12345, 4);

    c.showDetails();  
    c.showEngine();   

    return 0;
}
/*
Output:-
Brand: Toyota
Max Speed: 180
Wheels: 4
Engine Number: 12345
*/
