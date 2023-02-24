#include<iostream> 

using namespace std ; 

int main ()
{
    const int min {10}; 
    const int max {100} ; 
    int userNumber {0} ;
    cout << "Enter a number from: " << min << " to " << max << ": " ; 
    
    cin >> userNumber ; 
    if (userNumber >= min)    
    {
        cout << "\n========== if the statement 1 =========" << endl ;
        cout << userNumber << " is greater than or equal too " << min << endl ;  

        int diff {userNumber - min};
        cout << userNumber << " is greater than " << diff << endl ;  
    }
    if (userNumber <= max)
    {
        cout << "\n========== if the statement 2 =========" << endl ;
        cout << userNumber << " is less than or equal too " << max << endl ;  
        int diff{max - userNumber} ;// this diff is not the same as the one for the statement 1 
        cout << userNumber << " is less than " << diff << endl ;  
    }
    if (userNumber >= min && userNumber <= max)
    {
        cout << "\n========== if the statement 3 =========" << endl ;
        cout << userNumber << " is in range " << max << endl ;  
        int diff{max - userNumber} ;// this diff is not the same as the one for the statement 1 
        // cout << userNumber << " is less than " << diff << endl ;  
    }
    if (userNumber == min || userNumber == max)
    {
        cout << "\n========== if the statement 4 =========" << endl ;
        cout << userNumber << "right on the boundry" <<endl ; 
        cout << " All statmetn are true " << endl; 
         
    }
    return 0; 
}