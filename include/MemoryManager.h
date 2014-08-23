#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H
#include <cstdlib>
#include <iostream>
class MemoryManager{
    public:
        typedef size_t Marker;
        MemoryManager(size_t size);
        void* alloc(size_t size);
        Marker getMarker();
        void freeToMarker(Marker marker);
        void clear();
    private:
        int maxSize;
        void * start;
        Marker marker;
        Marker prev;
};
#endif
