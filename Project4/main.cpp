#include <iostream>
#include <vector>
using namespace std;
// g++ -std=c++14 -Wall main.cpp -o main

int main() {
    
    cout << "\n*********************************"; 
    char vowels[] {'A','E','I','O','U'};
    cout << "\nThe First Vowel Is: " << vowels[0] << endl;
    cout << "The Last Vowel Is: " << vowels[4] << endl;
    cout << "*********************************" <<endl; 

    cout << "\n******************************************"; 
    double hi_temp[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe First Tempreture Is: " << hi_temp[0] << endl;
    hi_temp[0] = 100.7;
    cout << "The First Tempreture Is: " << hi_temp[0] << endl;
    cout << "******************************************" <<endl; 

    
    cout << "\n******************************************"; 
    int test_scores [] {100,90,80,70,60};
    cout <<"\nThe First Test Score At Index 0 Is: " << test_scores[0] << endl;
    cout <<"The Second Test Score At Index 1 Is: " << test_scores[1] << endl;
    cout <<"The Third Test Score At Index 2 Is: " << test_scores[2] << endl;
    cout <<"The Fourth Test Score At Index 3 Is: " << test_scores[3] << endl;
    cout <<"The Fifth Test Score At Index 3 Is: " << test_scores[4] << endl;
    
    cout << "\nPlease Enter 5 New Test Scores: " << endl;
    //  cin >> test_scores[0];
   // cin >> test_scores[1];
   // cin >> test_scores[2];
   // cin >> test_scores[3];
   // cin >> test_scores[4];
    
    cout <<"\nThe First Test Score At Index 0 Is: " << test_scores[0] << endl;
    cout <<"The Second Test Score At Index 1 Is: " << test_scores[1] << endl;
    cout <<"The Third Test Score At Index 2 Is: " << test_scores[2] << endl;
    cout <<"The Fourth Test Score At Index 3 Is: " << test_scores[3] << endl;
    cout <<"The Fifth Test Score At Index 3 Is: " << test_scores[4] << endl;
    cout << "******************************************\n" <<endl; 
    
    cout << "\n******************************************" << endl;
    int aar [9] {};
    aar[0] = 100;
    aar[8] = 1000;

    cout << "The First Number In The Array Is: " << aar[0] << endl;
    cout << "The Last Number In The Array Is: " << aar[8] << endl;
    cout << "******************************************" << endl;
    
    cout << "\n******************************************" << endl;
   // vector <char> vowels; // Empty vector
   // vector <char> vowels (5); // 5 Initalized TO ZERO 
    vector <char> vowelsVector {'A','E','I','O','U'};
    
    cout << vowelsVector[0] << endl;
    cout << vowelsVector[4] << endl;
    cout << "******************************************\n";
    
    cout << "\n******************************************" << endl;
    vector <int> testScrores {100, 98, 89};
    
    cout << "Here Are Your Three Test Scores: " << endl;
    cout << "Student 1 Score: " << testScrores[0] << endl;
    cout << "Student 2 Score: " << testScrores[1] << endl;
    cout << "Student 3 Score: " << testScrores[2] << endl;
    
    cout << " \n** Another Method That This Can Be Done Is: " << endl;
    
    cout << "\nHere Are Your Three Test Scores: " << endl;
    cout << "Student 1 Score: " << testScrores.at(0) << endl;
    cout << "Student 2 Score: " << testScrores.at(1) << endl;
    cout << "Student 3 Score: " << testScrores.at(2) << endl;
    
    cout << "At This Point, There Are: " <<testScrores.size() << " Test Scores, In The Vector" << endl;
    
    cout << "\nPlease Enter " << testScrores.size() << " New Test Scores" << endl;
    cin >> testScrores.at(0);
    cin >> testScrores.at(1);
    cin >> testScrores.at(2);
    
    cout << "\nHere Are Your Three Test Scores: " << endl;
    cout << "Student 1 Score: " << testScrores.at(0) << endl;
    cout << "Student 2 Score: " << testScrores.at(1) << endl;
    cout << "Student 3 Score: " << testScrores.at(2) << endl;

    cout << "\nHere We Are Going To Try Something Different: " <<endl;
    cout << "Please Enter One More Test Score: ";

    int scoreToAdd{0};
    cin >> scoreToAdd;
      
    testScrores.push_back(scoreToAdd);
    cout << "\nPlease Enter One More Test Score: ";
    cin >> scoreToAdd;
    testScrores.push_back(scoreToAdd);
      
    cout << "\nHere Are Your Three Test Scores: " << endl;
    cout << "Student 1 Score: " << testScrores.at(0) << endl;
    cout << "Student 2 Score: " << testScrores.at(1) << endl;
    cout << "Student 3 Score: " << testScrores.at(2) << endl;
    cout << "Student 2 Score: " << testScrores.at(3) << endl;
    cout << "Student 3 Score: " << testScrores.at(4) << endl;
    cout << "\nOur Vector Now Holds A Size Of: " << testScrores.size() << " Positions" << endl;
    cout << "******************************************\n\n";
    

    cout << "******************************************\n\n";
    vector <int> vec {10,20,30,40,50};
    vec.at(0) = 100;
    vec.at(4) = 1000;
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;
    cout << vec.at(3) << endl;
    cout << vec.at(4) << endl;
    cout << "******************************************\n\n";
    
    cout << "**************Section Challange***********\n\n";
    vector <int> vectorOne {};
    vector <int> vectorTwo {};
    
    cout << "Vector One Currently Holds A Size Of: " << vectorOne.size() << endl;
    cout << "Vector Two Currently Holds A Size Of: " << vectorTwo.size() << endl;

    cout << "** VECTOR 1 - Single Dimention ** " << endl;
    
    int firstNum;
    int secondNum;
    
    cout << "\nPlease Enter A Number: ";
    cin >> firstNum;
    cout << "Please Enter Another Number: ";
    cin >> secondNum;
    
    vectorOne.push_back(firstNum);
    vectorOne.push_back(secondNum);
    
    cout << "\n*** Vector 1 Elements ***" << endl;
    cout << "First Value In Vector 1: " << vectorOne.at(0) << endl;
    cout << "Second Value In Vector 1: " << vectorOne.at(1) << endl;
    cout << "Vector One Currently Holds A Size Of: " << vectorOne.size() << endl;
    
    int thirdNum;
    int fourthNum;
    
    cout << "\nPlease Enter A Number: ";
    cin >> thirdNum;
    cout << "Please Enter Another Number: ";
    cin >> fourthNum;
    
    vectorTwo.push_back(thirdNum);
    vectorTwo.push_back(fourthNum);
    
    cout << "\n*** Vector 2 Elements ***" << endl;
    cout << "First Value In Vector 2: " << vectorTwo.at(0) << endl;
    cout << "Second Value In Vector 2: " << vectorTwo.at(1) << endl;
    cout << "Vector Two Currently Holds A Size Of: " << vectorTwo.size() << endl;
    
    vector <vector <int>> vector2D;
    
    vector2D.push_back(vectorOne);
    vector2D.push_back(vectorTwo);
    
    cout << "\n*** Vector 2_2D Elements ***" << endl;
    cout << "Here Is What Vector Two Looks Like: " << endl;
    cout << vector2D.at(0).at(0) << " " << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << " " << vector2D.at(1).at(1) << endl;
    
    vectorOne.at(0) = 1000;
    
    cout << "\n*** Vector 2_2D Elements ***" << endl;
    cout << "Here Is What Vector Two Looks Like Now:" << endl;
    cout << vector2D.at(0).at(0) << " " << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << " " << vector2D.at(1).at(1) << endl;
    
    cout << "\nVector 1 RePrint: " << vectorOne.size() << endl;
    cout << vectorOne.at(0) << endl;
    cout << vectorOne.at(1) << endl;
    cout << "Vector 1 Contains A Size Of: " << vectorOne.size() << endl;
   
   
    
    
    

    cout << "******************************************\n\n";
    

    
    
    

}