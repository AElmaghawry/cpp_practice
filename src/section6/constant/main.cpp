#include<iostream> 

using namespace std ; 
  
int main ()
{
    
    // cout << "Enter the number of rooms! " << endl; 
    // cin >> numberRooms ; 
    // cout << "The Number of the rooms is = " << numberRooms << endl;
    // cout << "The price per room is = " << pricePerRoom << endl ; 
    
    // float cost {0} ;
    // cost = numberRooms * pricePerRoom ; 
    // cout <<"The total price is = " << cost << " $" << endl ; 

    // float totalEstimation{0};
    // totalEstimation = (numberRooms * pricePerRoom)+ (numberRooms * pricePerRoom * taxRate); 
    // cout << "Total estimate is = " << totalEstimation << " $" << endl ; 
    // cout << "This estimate only valid for 30 Days" << endl ; 
    const double pricePerRoom {30.0};
    const double taxRate {0.06};
    const int estimate_expiry {30};      
    
    cout << "Welcome to frank Cleaning service\n" << endl;
    cout << "How many rooms would like cleaned " ; 

    int numberRooms {0} ; 
    
    cin >> numberRooms ; 
    cout << "price per room " << pricePerRoom << endl ; 
    cout << "The number of rooms " << numberRooms << endl ; 
    cout << "Cost " << numberRooms * pricePerRoom << endl; 
    cout << "tax " << numberRooms * pricePerRoom * taxRate << endl ; 
    cout << "===================" << endl ; 
    cout << "total cost " << (numberRooms * pricePerRoom )+ (numberRooms * pricePerRoom * taxRate) << endl; 
    cout << "This estimate only valid for " << estimate_expiry  << " Days" << endl ; 

    return 0; 
}