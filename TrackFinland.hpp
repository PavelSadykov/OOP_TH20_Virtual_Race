//
//  TrackFinland.hpp
//  ООП ДЗ 19 ГонкиВиртуальные
//
//  Created by Павел on 03.02.2023.
//

#ifndef TrackFinland_hpp
#define TrackFinland_hpp
#include <string>
#include <stdio.h>
#include "ITrack.hpp"

class TrackFinland : public ITrack{
public:
    TrackFinland(std::string trackName ,std::string trackQuality,float rateQuality);
   
    void Races( Car C,  Motorcycle M ,float rateQuality)override;
    float getQuality()override;
   
    void setQuality(float  rateQuality);
   
    
private:
   
    std::string _trackName;
    std::string _trackQuality;
    float _rateQuality;
   
    
};




#endif /* TrackFinland_hpp */
