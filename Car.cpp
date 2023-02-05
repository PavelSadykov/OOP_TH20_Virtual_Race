//
//  Car.cpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//
#include <iostream>
#include "Car.hpp"

Car::Car(std::string carBrand,float maxSpeed, float vehiclePatency): _carBrand(carBrand),_maxSpeed(maxSpeed),_vehiclePatency(vehiclePatency){}

float Car:: getSpeed(){
    return _maxSpeed;
}
float Car:: getPatency(){
    return _vehiclePatency;
}

void Car::getInfo(){
    std::cout<<"\nThe technical characteristics of the Car : "<<std::endl;
    std::cout<< _carBrand<<std::endl;
    std::cout<< "Max Speed : "<<_maxSpeed<<std::endl;
    std::cout<< "Patency : "<<_vehiclePatency<<std::endl;
}

void Car:: setMaxSpeed(float maxSpeed){
    _maxSpeed = maxSpeed;
}
void Car:: setVehiclePatency(float vehiclePatency){
    _vehiclePatency = vehiclePatency;
}



