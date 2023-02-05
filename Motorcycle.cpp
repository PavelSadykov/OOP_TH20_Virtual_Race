//
//  Motorcycle.cpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//
#include<iostream>
#include "Motorcycle.hpp"

Motorcycle::Motorcycle(std::string motorcycleBrand,float maxSpeed, float vehiclePatency): _motorcycleBrand(motorcycleBrand),_maxSpeed(maxSpeed),_vehiclePatency(vehiclePatency){}

float Motorcycle:: getSpeed(){
    return _maxSpeed;
}
float Motorcycle:: getPatency(){
    return _vehiclePatency;
}
void Motorcycle:: getInfo(){
std::cout<<"\nThe technical characteristics of the Motocyrcle : "<<std::endl;
std::cout<< _motorcycleBrand<<std::endl;
std::cout<< "Max Speed : "<<_maxSpeed<<std::endl;
std::cout<< "Patency : "<<_vehiclePatency<<std::endl;
}


void Motorcycle:: setMaxSpeed(float maxSpeed){
    _maxSpeed = maxSpeed;
}
void Motorcycle:: setVehiclePatency(float vehiclePatency){
_vehiclePatency = vehiclePatency;
}








