#include<iostream> 

using namespace std ; 

int main ()
{
    int result {0};  
    const int dollar {100} , quarters {25} , dime {10} , nickel {5};
    int amount {0}; 

    cout << "Enter the amount is cents" << endl; 
    cin >> amount ; 
    result = amount / dollar ; 
    amount = amount % dollar ; 
    cout << "dollar   : " << result << endl ;  
    result = amount / quarters ; 
    amount = amount % quarters ; 
    cout << "quarters : " << result << endl ; 
    result = amount / dime ; 
    amount = amount % dime ; 
    cout << "dime     : " << result << endl ; 
    result = amount / nickel ; 
    amount = amount % nickel ; 
    cout << "nickel   : " << result << endl ;
    cout << "penny    : " << amount << endl ;
    return 0; 
}