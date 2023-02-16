#include<iostream> 

using namespace std ; 

int main ()
{
    char vowels [] {'a','e','i','o','u'}; 
    cout << "The first vowels is " << vowels[0] << endl; 
    cout << "The last vowels is " << vowels[4] << endl ; 
    
    // cin >> vowels[5]; //out of bounds- don't do this 

    double temp[] {10,20,30} ; 
    cout << "\n the first temps is " << temp[0] << endl;
    temp[0] = 50 ;  
    cout << "\n the first temps is " << temp[0] << endl;

    int test_2[]{100};
    cout << "\n the first temps is " << test_2[0] << endl;
    cout << "\n the first temps is " << test_2[1] << endl;   

    cin >> test_2[0];
    cin >> test_2[1];

    cout << "\n the first temps is " << test_2[0] << endl;
    cout << "\n the first temps is " << test_2[1] << endl;

    cout << "\n the first temps is " << test_2 << endl;
          

    return 0; 
}