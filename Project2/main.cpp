#include <iostream>
#include <string>
using namespace std;
// g++ -std=c++14 -Wall main.cpp -o main

int main() {
    
    string name;
    cout << endl;
    
    cout << "Please Enter Your Name: ";
    getline(cin,name);
    cout << endl;
    
    cout << "Hi " << name << "!" << std::endl;
    cout << endl;
    
}