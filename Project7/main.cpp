#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
// g++ -std=c++14 -Wall main.cpp -o main
// || <- Means OR 
// && <- Means AND
// == <- Comparing 
// =  <- Setting


int main() {
    
    char first_name[50] {"Bjarne"};
    char last_name[50] {"Stroustrup"};
    char whole_name[100] {};
   // int first_name_length = 0;
   // int last_name_length = 0;
   // int whole_name_length = 0;
    
    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);

    strcpy(whole_name, first_name);
    strcat(whole_name, " ");
    strcat(whole_name, last_name);
    
   int whole_name_length = strlen(whole_name);
   
   cout << "First Name Is: " << first_name_length << " Characters" 
   << endl;
   
   cout << "last Name Is: " << last_name_length << " Characters" 
   << endl;
   
   cout << "Whole Name Is: " << whole_name_length << " Characters" 
   << endl;   
    
}

