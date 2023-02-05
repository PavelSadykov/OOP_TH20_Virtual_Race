//
//  main.cpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//
#include "ITrack.hpp"
#include "IVehicle.hpp"
#include "Car.hpp"
#include "Motorcycle.hpp"
#include "TrackMonteKarlo.hpp"
#include "TrackFinland.hpp"
#include "TrackSanRemo.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    //Выдает ошибку :
    //Reference to type 'const Vehicle' could not bind to an lvalue of type 'Vehicle *'
    //IVehicle* vCar = new Car("Сar brand  :  Porsche 935 ",330,2);
    //IVehicle* vMoto = new Motorcycle ("Motorcycle brand  :  Suzuki GSX-R 600",250,5);
    
    Car vCar ("Сar brand  :  Porsche 935 ",330,3);
    Motorcycle vMoto ("Motorcycle brand  :  Suzuki GSX-R 600",250,5);
    TrackSanRemo trackS("Forest  Mountain Trail in San Remo","Description of track : Gravel",0.5);
    TrackFinland trackF("Snow Track in Finland", "Description of track : Snow and Ice", 0.7);
    TrackMonteKarlo trackM ("Ring Race Track in Monte Carlo", "Description of track : Asphalt",  1.0);
    
    vCar.getInfo();
    vMoto.getInfo();
    
    int X,Y=0;
    do{
        std::cout<<"\nPlease, select the Track for racing: \n1 - Forest  Mountain Trail in San Remo \n2 - Snow Track in Finland \n3 - Ring Race Track in Monte Carlo  \n4 - To finish game\n->   ";
        std::cin>>X;
        switch (X) {
            case 1:
                trackS.Races(vCar, vMoto, trackS.getQuality());
                break;
            case 2:
                trackF.Races(vCar, vMoto,trackF.getQuality());
                break;
            case 3:
                trackM.Races(vCar, vMoto, trackM.getQuality());
                break;
            case 4:
                std::cout<<" The game is over "<<std::endl;
                exit(0);
                break;
            default:std::cout<<"Input Error, repeat the input"<<std::endl;
                break;
        }
    }while (Y!=5);
    return 0;
}
