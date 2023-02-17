#include<iostream> 

using namespace std ; 

int main ()
{
    int num1 {10}; // initialization not assignment 
    int num2 {20}; 

    num1 = 100 ; // assign 100 to num1 which mean move 100 into the location of 100 , RHS means the content LHD mean the location
    
    cout << "num1 is = " << num1 << endl ; 
    cout << "num2 is = " << num2 << endl ; 


    return 0; 
}