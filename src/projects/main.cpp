#include <iostream>
#include <math.h>

int main ()
{   float wheel_radius = 0,MaxLinearVelocity = 0 , MaxHp = 0 ;   
    float omega = 0 ; 
    float rpm = 0 ;
    float torque = 0 ; 
    std::cout << "Enter the Wheel Radius =" << std::endl; 
    std::cin >> wheel_radius ;
    std::cout <<"Enter the Max Velocity for the car" << std::endl; 
    std::cin >> MaxLinearVelocity; 
    std::cout << "Enter the Max Hp of the Car " << std::endl ; 
    std::cin >> MaxHp; 

    omega = MaxLinearVelocity / wheel_radius ; 
    std::cout << " The angular velocity is = " << omega << std::endl;
    rpm = omega / 2 * M_PI ; 
    std::cout << " The rpm is = " << rpm << std::endl ; 
    torque = 7127  * ((MaxHp / rpm)/2) ; 

    std::cout << "max Torque of the single motor ="<< torque << std::endl ; 
    
    

    return 0; 
}