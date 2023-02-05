//
//  Car.hpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//

#ifndef Car_hpp
#define Car_hpp
#include "IVehicle.hpp"
#include <string>
#include <stdio.h>


class Car : public IVehicle{
public:
    Car(std::string carBrand,float maxSpeed, float vehiclePatency);
    
    float getSpeed()override;
    float getPatency()override;
    void getInfo();
    
    void setMaxSpeed(float maxSpeed);
    void setVehiclePatency(float vehiclePatency);
   
    
    
private:
    std::string _carBrand;
    float _maxSpeed;
    float _vehiclePatency;
};




#endif /* Car_hpp */
