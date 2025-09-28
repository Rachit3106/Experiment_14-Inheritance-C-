/*
Name:- Rachit Deshpande
PRN:- 24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

class Mother{
    public:
        string hair_color="Brown";
        string eye_color="Blue";

        void Skills(){
            cout << "Cooking, Tennis  & swimmiming" << endl;
        }
};

class Father{
    public:
        int height=6;
        string surname="XYZ";

        void Sports(){
            cout << "Cricket, Football, Chess" << endl;
        }
};

class Child:public Mother,public Father{
    public:
    string name="XYZ";
    Father f1;
    Mother m1;

    void showSkills(){
        f1.Sports();
        m1.Skills();
        cout << "Badminton, Golf, Hockey" << endl;
    }
};

int main(){
    Child c1;
    cout << "Child Skills: " << endl;
    c1.showSkills();
    cout << "Name: "<< c1.name << endl;
    cout << "Hair Color: " << c1.hair_color << endl;
}
/*
Output:
Child Skills:
Cricket, Football, Chess
Cooking, Tennis  & swimmiming
Badminton, Golf, Hockey
Name: XYZ
Hair Color: Brown
*/
