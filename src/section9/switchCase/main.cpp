#include<iostream> 

using namespace std ; 

int main ()
{
    char letterGrade {} ; 
    cout << "Enter the letter grade that you expect on exam : " ; 
    cin >> letterGrade ; 

    switch (letterGrade)
    {
    case 'a':
    case 'A':

        cout << "You need a 90 or above " ; 
        break;
    case 'b':
    case 'B':

        cout << "You need a 80 or above " ; 
        break;
    case 'c':
    case 'C':

        cout << "You need a 70 or above " ; 
        break;
    case 'd':
    case 'D':

        cout << "You need a 60 or above " ; 
        break;
    
    default:
        cout << "Error grade letter "; 
        break;
    }

    cout << endl ; 
    return 0; 
}