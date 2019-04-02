#include <iostream>
using namespace std;
// g++ -std=c++14 -Wall main.cpp -o main

int main() {
    
    int favNum;
    std::cout << "Please Enter Your Favortie Number: ";
    std::cin >> favNum;
    std::cout << "Thanks Processing ...." << std::endl;
    std::cout << "Great! -- " << favNum << " Is My Favorite Number Too" << std::endl;
   return 0;
}