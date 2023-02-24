#include <iostream> 
#include<vector> 


using namespace std ; 

int main ()
{
    // vector <char> vowels ; //empty
    // vector <char> vowels(5); //create a vecotr with 5 indexes 
    vector <char> vowels {'a','e','o','i','u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl ; 

    cout<< vowels.at(3) << endl ;
    vowels.push_back('w') ;
    cout << vowels.at(5) << endl ;  
    cout << vowels.size() << endl ; 
    vowels.pop_back();
    
    cout << vowels.at(4) << endl ;

    cout << vowels.size() << endl ; 

    // 2D vector 
    vector<vector<int>> test 
    {
        {1 ,2 ,3 ,4},
        {11 ,22 ,33, 44},
        {111 ,222 ,333, 444}
        
    };
    cout << test[0][0] << endl ;

    cout << test.at(1).at(0) << endl ; 

    return 0; 
}