#include<iostream> 

using namespace std ; 

int main ()
{
    // bool equal_result{false}; 
    // bool not_equal_result {false}; 

    // int num1{},num2{}; 
    
    // cout << boolalpha ; // to print as text true or false 

    // cout << "Enter 2 numbers seprated with space" << endl ; 
    // cin >> num1 >> num2 ; 

    // equal_result = (num1 == num2); 
    // not_equal_result = (num1 != num2 ) ; 

    // cout <<"result is  equal " << equal_result << endl ; 
    // cout << "result  not equal " << not_equal_result << endl ; 

    // int age {0}; 
    // bool parental_consent {} , ssn {} , accidents{} ; 
    // cout << "age" << endl ; 
    // cin >> age ; 
    // cout << " parental_consent" <<endl ; 
    // cin >> parental_consent ;
    // cout << "ssn" << endl ; 
    // cin >> ssn ; 
    // cout <<"accidents"<< endl ; 
    // cin >> accidents; 

    // if ((age >= 18|| (age > 15 && parental_consent)) && ssn && !accidents)//WRITE false ALL YOUR CODE WITHIN THE PARENTHESES
    //     cout << "Yes, you can work.";

    int num1 {} ; 
    int num2 {} ;
    cout << "Enter two number with space sepration" << endl ; 
    cin >> num1 >> num2 ; 

    cout << "The result is " << num1 / num2 << endl ; 
    cout << "The reminder is " << num1 % num2 << endl ; 

    return 0; 
}