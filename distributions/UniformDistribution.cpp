/* 
 * File:   UniformDistribution.cpp
 * Author: jake.rowland
 * 
 * Created on September 10, 2018, 5:20 PM
 */

#include "UniformDistribution.h"

UniformDistribution::UniformDistribution(
        const int lowerB, 
        const int upperB) {
    if(lowerB < 0) {
        throw std::invalid_argument(
                "UniformDistribution: Lower bound must be >= to 0");
    }
    if(upperB <= lowerB) {
        throw std::invalid_argument(
                "UniformDistribution: Upper bound must be > lower bound");
    }
    
    lowerBound = lowerB; 
    upperBound = upperB;
}

UniformDistribution::~UniformDistribution() {
}


Dist UniformDistribution::whichDistribution() {
    return Dist::Uniform;
}


const int UniformDistribution::generateSession() {
    return RandomNumberGenerator::UniformRandomGenerator(
            lowerBound, 
            upperBound);
}