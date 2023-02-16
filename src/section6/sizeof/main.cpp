#include<iostream> 
#include<climits> // integer type 

using namespace std ; 

int main ()
{
    cout << "size of the information" <<endl ;
    cout << "-----------------------" <<endl ; 
    cout << "char " << sizeof(char) << " bytes" << endl ; 
    cout << "short " << sizeof(short) << " bytes" << endl ; 
    cout << "int " << sizeof(int) << " bytes" << endl ; 
    cout << "long " << sizeof(long) << " bytes" << endl ; 
    cout << "longlong " << sizeof(long long) << " bytes" << endl ;

    cout << "float" << sizeof(float) << " bytes" << endl ;


    cout << "char" << CHAR_MIN << endl; 
    cout << "int" << INT_MIN << endl ; 
    cout << "int" << INT_MAX << endl ; 
 
    return 0; 
}