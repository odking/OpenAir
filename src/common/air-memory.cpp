#include "air-memory.h"

AirMemory::AirMemory()
{
}

AirMemory::~AirMemory()
{
}

BYTE *AirMemory::Allocate(int size)
{
    return new BYTE(size);
}

void Delllcate(BYTE **ptr)
{
    delete ptr;
    *ptr = nullptr;
}



