//
//  TrackMonteKarlo.cpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//
#include "Car.hpp"
#include "TrackMonteKarlo.hpp"
#include <iostream>
TrackMonteKarlo::TrackMonteKarlo(std::string trackName ,std::string trackQuality,float rateQuality):
_trackName(trackName),_trackQuality(trackQuality),_rateQuality(rateQuality){}

void TrackMonteKarlo:: Races( Car C,  Motorcycle M ,float rateQuality){
    float rating1=0, rating2=0;
    float P1 = C.getPatency();
    float P2 = M.getPatency();
    float S1 = C.getSpeed();
    float S2 = M.getSpeed();
    
    std::cout<<"\nYou have chosen  : \nSpecial stage No. 3: Ring Race Track in Monte Carlo"<<std::endl;
       if(S1>S2){
           rating1+=3*rateQuality;
           rating2+=2;
       }else{
           rating2+=3*rateQuality;
           rating1+=2;
       }
       if(P1>P2){
           rating1+=5;
           rating2+=5;
       }else{
        rating2+=5;
        rating1+=5;
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

void TrackMonteKarlo:: setQuality(float  rateQuality){
    _rateQuality = rateQuality;
}


float TrackMonteKarlo:: getQuality( ){
    return _rateQuality;
}


