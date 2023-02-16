#include<iostream> 

using namespace std ; 

int main ()
{
    const double pricePerSmallRoom {25.0};
    const double pricePerLargeRoom {35.0};
    const double taxRate {0.06};
    const int estimate_expiry {30};      
    
    cout << "Welcome to frank Cleaning service\n" << endl;
    cout << "How many small rooms would like cleaned " ; 

    int numberSmallRooms {0} ; 
    cin >> numberSmallRooms ;

    cout << "How many large rooms would like cleaned " ; 
    
    int numberLargeRooms {0} ; 
    cin >> numberLargeRooms ;

    cout << "price per small room " << pricePerSmallRoom << endl ; 
    cout << "price per small room " << pricePerLargeRoom << endl ;

    float costTotal {0} ; 
    costTotal = (numberSmallRooms * pricePerSmallRoom ) + (numberLargeRooms * pricePerLargeRoom );
    cout << "Cost " << costTotal << endl; 
    float taxTotal {0}; 
    taxTotal = costTotal * taxRate ; 
    cout << "tax " << taxTotal << endl ; 
    cout << "===================" << endl ; 
    
    cout << "total cost " << costTotal + taxTotal << endl; 
    cout << "This estimate only valid for " << estimate_expiry  << " Days" << endl ; 
    return 0; 
}