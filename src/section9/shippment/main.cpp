#include<iostream> 
#include <iomanip>
using namespace std ; 

int main ()
{
    int length {0} , width{0} , height{0}; 
    const double cost {2.5};
    const int limit1 {100} ; 
    const int limit2 {500} ; 
    const int maxDimension {10} ; 
    const float chargeLimit1 {0.1}; 
    const float chargeLimit2 {0.25}; 

    float result {0};
    int volume {} ; 

    cout << "enter the dimension in inches without space : " ; 
    cin >> length >> width >> height ; 

    if (length > maxDimension || width > maxDimension || height > maxDimension )
    {
        cout << " Sorrr, we can't ship this package"<< endl ;  
    }
    else {
        volume = length * width * height ; 
        result = 2.5 ; 
        if (volume > limit2)
        {
            cout << fixed << setprecision(2); 
            result += result*chargeLimit2 ; 
            cout << "===========================limit2==================================="<< endl; 
            cout <<" The package is volume is "<< volume << " is subjected to Charge limit 2"<< endl ; 
            cout <<" The total cost is equal "<< result << endl ; 
        }
        else {
            cout << fixed << setprecision(2); 
            result += result*chargeLimit1 ; 
            cout << "===========================limit1===================================" << endl ; 
            cout <<" The package is volume is "<< volume << " is subjected to Charge limit 1"<< endl ; 
            cout <<" The total cost is equal "<< result << endl ;
        }
    }
    
    return 0; 
}