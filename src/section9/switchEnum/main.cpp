#include<iostream> 

using namespace std ; 

int main ()
{
    enum direction {left, right, up , down}; // create your own data types with the list of variables 

    direction heading {left}; 

    switch (heading)
    {
    case left:
        cout << "Going left" << endl;
        break;
    case right:
        cout << "Going right"<< endl;
        break;
    case up:
        cout << "Going up" <<endl ;
        break;
    case down:
        cout << "Going down" << endl ;
        break;    
    default:
        cout << "Error in heading" << endl;
        break;
    }
    
    cout << endl ; 
    return 0; 
}