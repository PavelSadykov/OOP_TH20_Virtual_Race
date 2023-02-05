//
//  IVehicle.hpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//

#ifndef IVehicle_hpp
#define IVehicle_hpp


#include <string>
#include <stdio.h>


class IVehicle{
public:
    virtual float getSpeed()=0;
    virtual float getPatency()=0;
    
    virtual ~IVehicle(){}
};



#endif /* IVehicle_hpp */
