/* 
 * File:   Distribution.h
 * Author: jake.rowland
 *
 * Created on September 10, 2018, 12:16 PM
 */

#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

#include <set>
#include <time.h>

#include "../utils/RandomNumberGenerator.h"

enum class Dist {
    Uniform,
    Tiered,
    Skewed,
    Binomial
};

class Distribution {
public:
    Distribution();
    virtual ~Distribution();
    
    /** Generate a unique list of sessions
     * 
     * @param size - Size of the list
     * @return vector<const int> - List of unique sessions
     */
    std::set<int> generateSessions(const int size);
    
    virtual Dist whichDistribution() = 0;
    
protected:
    int lowerBound;
    int upperBound;
    
    /** Generate individual sessions based on a distribution
     * 
     * @return const int - Sessions generated
     */
    virtual const int generateSession() = 0;
};

#endif /* DISTRIBUTION_H */