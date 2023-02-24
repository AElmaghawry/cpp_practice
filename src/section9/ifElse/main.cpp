#include<iostream> 

using namespace std ; 

int main ()
{
    int num {0}; 
    const int target {10}; 

    cout << "Enter the number to be compared to " << target << ": " ;
    cin >> num ; 

    if (num >= target)
    {
        cout << "\n======================================="<< endl ; 
        cout << num << " is greater or equal to " << target << endl ; 
        int diff {num - target}; 
        cout << diff <<" is the differnce between " <<num << " and " << target << endl ; 

    }

    else 
    {
        cout << "\n======================================="<< endl ; 
        cout << num << " is not greater nor equal to " << target << endl ; 
    }
    cout << endl ; 

    return 0; 
}