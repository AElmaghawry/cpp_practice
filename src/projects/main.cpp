#include <iostream>
#include <math.h>

int main ()
{   float wheel_radius = 0.0,MaxLinearVelocity = 0.0 , MaxHp = 0.0 ;   
    float omega = 0.0 ; 
    float rpm = 0.0 ;
    float torque = 0.0 ; 
    float MaxLinearVelocity_ms = 0.0 ; 

    std::cout << "Enter the Wheel Radius =" << std::endl; 
    std::cin >> wheel_radius ;
    // std::cout << wheel_radius << std::endl;
    std::cout <<"Enter the Max Velocity for the car km/hr" << std::endl; 
    std::cin >> MaxLinearVelocity; 
    std::cout << "Enter the Max Hp of the Car " << std::endl ; 
    std::cin >> MaxHp; 

    MaxLinearVelocity_ms = (MaxLinearVelocity * 5.0 )/18.0;
    std::cout << MaxLinearVelocity_ms << std::endl; 
    omega = MaxLinearVelocity_ms / wheel_radius ; 
    std::cout << "The angular velocity is = " << omega << "rad/sec"<< std::endl;
    rpm = omega * 60 / (2.0 * M_PI); 
    std::cout << "The rpm is = " << rpm << std::endl ; 
    torque = 7127  * ((MaxHp / rpm)/2) ; 
    std::cout << "Max Torque for a single motor = "<< torque << " Nm" << std::endl ; 

    return 0; 
}