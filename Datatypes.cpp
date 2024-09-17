#include<iostream>
using namespace std;

int main(){
    int age = 23;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true;
    double Price = 100.99;

    cout << sizeof(age) << endl;
    cout << age << endl;
    cout << grade << endl;
    cout << PI << endl;
    cout << isSafe << endl; // true -> 1 & false -> 0
    cout << Price << endl;
    return 0;
}