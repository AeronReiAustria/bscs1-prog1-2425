#include<iostream>
using namespace std;

class Person {
public:
string name;
int age;

};

class car{
public:
string name;
string color;
};
int main() {

    Person Person1;
    Person1.name = "Aeron Rei A Austria";
    Person1.age = 20;
    
    car car1;
    car1.name = "L300";
    car1.color = "White/Balck";
   
   cout << Person1.name << " is " << Person1.age << "years old" << endl;
    cout << car1.name << " Is a very Reliable trunk for Students " << car1.color << " is my favorite paint for it" << endl;
    
    return 0;
}
