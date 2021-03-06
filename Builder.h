#ifndef Builder_h
#define Builder_h

#include <iostream>
#include <fstream>
#include "Map.h"

class Builder
{

protected:
    Map * map;
public:
    Map * getMap() { return map;}
    virtual void buildMap(string) = 0;
};

class EditBuilder : public Builder
{

public:
    void buildMap(string);
};

class PlayBuilder : public Builder
{

public:
    void buildMap(string, Character);
};

#endif /* Builder_h */
