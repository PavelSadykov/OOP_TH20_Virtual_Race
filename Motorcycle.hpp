//
//  Motorcycle.hpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//

#ifndef Motorcycle_hpp
#define Motorcycle_hpp
#include "IVehicle.hpp"
#include <string>
#include <stdio.h>

class Motorcycle : public IVehicle{
public:
    Motorcycle(std::string motorcycleBrand,float maxSpeed, float vehiclePatency);
   float getSpeed()override;
   float getPatency()override;
    void getInfo();
    
    void setMaxSpeed(float maxSpeed);
    void setVehiclePatency(float vehiclePatency);
    
   
private:
    std::string _motorcycleBrand ;
    float _maxSpeed;
    float _vehiclePatency;
    
    
};






#endif /* Motorcycle_hpp */
