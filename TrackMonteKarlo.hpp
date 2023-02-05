//
//  TrackMonteKarlo.hpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//

#ifndef TrackMonteKarlo_hpp
#define TrackMonteKarlo_hpp
#include <string>
#include <stdio.h>
#include "ITrack.hpp"
#include "Car.hpp"

class TrackMonteKarlo : public ITrack{
public:
    TrackMonteKarlo(std::string trackName ,std::string trackQuality,float rateQuality);
   
    void Races( Car C,  Motorcycle M ,float rateQuality)override;
    float getQuality()override;
   
    void setQuality(float  rateQuality);
   
    
private:
   
    std::string _trackName;
    std::string _trackQuality;
    float _rateQuality;
   
    
};




#endif /* TrackMonteKarlo_hpp */
