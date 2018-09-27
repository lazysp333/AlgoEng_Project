/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConflictHandler.h
 * Author: jake.rowland
 *
 * Created on September 15, 2018, 6:06 PM
 */

#ifndef CONFLICTHANDLER_H
#define CONFLICTHANDLER_H

#include <stdexcept>
#include <utility>

enum class ConflictSizeConstrinat {
    M,
    N2
};

class ConflictHandler {
public:
    /** Destructor
     * 
     */
    virtual ~ConflictHandler();
    
    /** Get number of unique conflicts
     * 
     * @return int - number of unique conflicts
     */
    int getUniqueConflictCount();
    
    /** Get the calculated size of the eArray
     * 
     * @return int - size of eArray
     */
    int getSizeOfEArray();
    
    /** Add non-unique conflict count together
     * 
     * @param count - Number to add
     */
    void addConflictCount(unsigned long count);
    
    /** Get the non-unique conflict count
     * 
     * @return unsigned long - non-unique count
     */
    unsigned long getConflictCount();
    
    /** Create the p and e arrays based on the structure
     * 
     * @return int** - Two points to the arrays generated by this function.
     *      0: pArray
     *      1: eArray
     */
    virtual int** peArray() = 0;
    
    /** Adds a pair conflict to the conflict handler
     * 
     * @param std::pair<int,int> - Pair to add to the handler
     */
    virtual void addConflict(std::pair<int,int>) = 0;
    
    virtual ConflictSizeConstrinat whatSize() = 0;
    
protected:
    int uniqueConflictCount;
    unsigned long conflictCount;
};

#endif /* CONFLICTHANDLER_H */

