//
//  TrackFinland.cpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//

#include "TrackFinland.hpp"
#include "Car.hpp"
#include <iostream>

TrackFinland::TrackFinland(std::string trackName ,std::string trackQuality,float rateQuality):
    _trackName(trackName),_trackQuality(trackQuality),_rateQuality(rateQuality){}

void TrackFinland:: Races( Car C,  Motorcycle M ,float rateQuality){
    float rating1=0, rating2=0;
    float P1 = C.getPatency();
    float P2 = M.getPatency();
    float S1 = C.getSpeed();
    float S2 = M.getSpeed();
    std::cout<<"\nYou have chosen  : \nSpecial stage No. 2: Snow Track in Finland"<<std::endl;
       if(S1>S2){
           rating1+=3*_rateQuality;
           rating2+=2;
       }else{
           rating2+=3*_rateQuality;
           rating1+=2;
       }
       if(P1>P2){
           rating1+=5;
           rating2+=4;
       }else{
        rating2+=5;
        rating1+=4;
       }
   std::cout<<"\nRatings of the current race."<<std::endl;
   std::cout<<"Championship points of Car : "<<rating1<<std::endl;
   std::cout<<"Championship points of Motorcycle : "<<rating2<<std::endl;
    if(rating1 > rating2){
        std::cout<<"\nTHE WINNER IS a CAR !"<<std::endl;
        }else{
        std::cout<<"\nTHE WINNER IS  a MOTORCYCLE !"<<std::endl;
        }
    }
    
    
void TrackFinland:: setQuality(float  rateQuality){
    _rateQuality = rateQuality;
}


float TrackFinland:: getQuality( ){
    return _rateQuality;
}
