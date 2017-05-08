#ifndef AIR_MEM_H
#define AIR_MEM_H

#include "type.h"

class AirMemory
{
public:
    AirMemory();
    ~AirMemory();

public:
    BYTE *Allocate(int size);
    void Dellocate(BYTE **ptr);

};

#endif
