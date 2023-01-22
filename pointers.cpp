#include <iostream>
using namespace std;

int main(){
// Pointers are basically just memory addresses
    int age = 20;
    double gpa = 5.0;
    string name = "Barney";

    cout << "Age: " <<  &age << endl;
    cout << "Name: " <<  &name << endl;
    cout << "Gpa: " <<  &gpa << endl;

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    // Dereferencing a pointer simply means we are gonna grab the value inside the memory address.
    
    cout << *&age<< endl;

    return 0;
}