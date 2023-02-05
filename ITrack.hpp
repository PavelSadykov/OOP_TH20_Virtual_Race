//
//  ITrack.hpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//

#ifndef ITrack_hpp
#define ITrack_hpp
#include "Car.hpp"
#include "Motorcycle.hpp"
#include "IVehicle.hpp"
#include <string>
#include <stdio.h>

class ITrack{
public:
    
    virtual void Races( Car C,  Motorcycle M ,float rateQuality)=0;
    virtual float getQuality()=0;

    virtual ~ITrack(){}

};






#endif /* ITrack_hpp */
