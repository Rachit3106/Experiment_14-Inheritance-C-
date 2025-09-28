/*
Name:-Rachit Deshpande
PRN:-24070123035
Branch:-A2
*/
#include <iostream>
using namespace std;

class Science{
    public:
    string Subjects[3];
    virtual void Work()=0;
    string college;
    Science(string s[3],string clg){
        for(int i=0;i<3;i++){
            Subjects[i]=s[i];
        }
        college=clg;
    }
};

class Engineering:public Science{
    public:
    static string s[3];
    Engineering():Science(s,"Symbiosis"){}
    void Work() override{
        cout << "Engineering focuses on applying science to solve real-world problems." << endl;
    }
};
string Engineering::s[3]={"Physics","Chemistry","Maths"};

class Biology : public Science {
public:
    static string s[3];
    Biology() : Science(s, "Fergusson College") {}

    void Work() override {
        cout << "Biology focuses on studying living organisms and life processes." << endl;
    }
};
string Biology::s[3] = {"Botany", "Zoology", "Genetics"};

int main() {
    Engineering e;
    Biology b;

    cout << "College: " << e.college << endl;
    cout << "Subjects: ";
    for (int i = 0; i < 3; i++) cout << e.Subjects[i] << " ";
    cout << endl;
    e.Work();

    cout << "\nCollege: " << b.college << endl;
    cout << "Subjects: ";
    for (int i = 0; i < 3; i++) cout << b.Subjects[i] << " ";
    cout << endl;
    b.Work();

    return 0;
}
/*
Output:-
College: Symbiosis
Subjects: Physics Chemistry Maths 
Engineering focuses on applying science to solve real-world problems.

College: Fergusson College
Subjects: Botany Zoology Genetics 
Biology focuses on studying living organisms and life processes.
*/
