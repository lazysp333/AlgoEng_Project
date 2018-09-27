/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoTiedDistribution.h
 * Author: jake.rowland
 *
 * Created on September 10, 2018, 8:26 PM
 */

#ifndef TWOTIEREDDISTRIBUTION_H
#define TWOTIEREDDISTRIBUTION_H

#include "Distribution.h"

class TwoTieredDistribution: public Distribution {
public:
    TwoTieredDistribution(
            const int lowerB,
            const int tr,
            const float splt,
            const int upperB);
    virtual ~TwoTieredDistribution();
    
    Dist whichDistribution() override;
private:
    int tier;
    float split;
    
    const int generateSession() override;
};

#endif /* TWOTIEREDDISTRIBUTION_H */

