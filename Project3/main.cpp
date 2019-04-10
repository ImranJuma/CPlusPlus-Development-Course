#include <iostream>
// g++ -std=c++14 -Wall main.cpp -o main
using namespace std;

int main() {
    
    cout << "\nWelcome To Franks Carpet Cleaning Service" << endl;
    cout << "\nHere Are My Rates & Charges" << endl;
    cout << "-- Small Room: $25.00" << endl;
    cout << "-- Large Room: $35.00" << endl;
    cout << "\nSales tax Is An Addition + 6% " << endl;
    cout << "** All Estimates Are Valid For 30 Days **" << endl;
    
    const int smallRoomRate = {25};
    const int largeRoomRate = {35};
    int amountOfSmallRooms;
    int amountOfLargeRooms;
    
    cout << "\nHow Many Small Rooms Do You Have: ";
    cin >> amountOfSmallRooms;
    cout << "How Many Large Rooms Do You Have: ";
    cin >> amountOfLargeRooms;
    
    int smallRoomChargeBeforeTax = smallRoomRate * amountOfSmallRooms;
    int largeRoomChargeBeforeTax = largeRoomRate * amountOfLargeRooms;
    int totalBeforetax = smallRoomChargeBeforeTax + largeRoomChargeBeforeTax;
    float totalTaxPaid = totalBeforetax * 0.06; 
        
    cout << "\nHere Is Your Esitmate" << endl;
    
    cout << "Number of Small Rooms: " << amountOfSmallRooms << endl;
    cout << "Number of Large Rooms: " << amountOfLargeRooms << endl;
    
    cout << "\nPrice Per Small Room: $" << smallRoomRate << endl;
    cout << "Price Per Large Room: $" << largeRoomRate << endl;
    
    cout << "\nYour Total Cost: $" << totalBeforetax << endl;;
    cout << "Your Taxes Are: $" << totalTaxPaid << endl;;
    cout << "\nYour Grand Total Is: $" << totalBeforetax + totalTaxPaid << endl;
    cout << "All Quotes Are Good For 30 Days\n\n" << endl;
}