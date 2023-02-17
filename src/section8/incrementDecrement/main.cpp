#include<iostream> 

using namespace std ; 

int main ()
{
    int counter {10} ;
    int result {0} ; 

    // counter ++ ; 
    // cout << counter << endl; 

    // ++ counter ; 
    // cout << counter << endl ; 
    
    result = ++ counter ; 
    cout << result << endl ; 

    counter = 10; 
    result = 0 ; 
    result = counter++ ; 
    cout << result << endl ; 

    return 0; 
}