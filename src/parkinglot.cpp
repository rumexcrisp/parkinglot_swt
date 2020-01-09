#include "parkinglot.hpp"
#include <iostream>

ParkingLot::ParkingLot(int family, int electric, int small, int regular)
{
    lot_family = family;
    family_occupied = 0;
    lot_electric = electric;
    electric_occupied = 0;
    lot_small = small;
    small_occupied = 0;
    lot_regular = regular;
    regular_occupied = 0;
}

ParkingLot::~ParkingLot() {}

void ParkingLot::occupyLot(lot_type type)
{
    switch (type)
    {
    case family:
        family_occupied++;
        break;
    case electric:
        electric_occupied++;
        break;
    case small:
        small_occupied++;
        break;
    case regular:
        regular_occupied++;
        break;
    default:
        std::cout << "Unknown Type!";
    }
}

void ParkingLot::releaseLot(lot_type type)
{
    switch (type)
    {
    case family:
        family_occupied--;
        break;
    case electric:
        electric_occupied--;
        break;
    case small:
        small_occupied--;
        break;
    case regular:
        regular_occupied--;
        break;
    default:
        std::cout << "Unknown Type!";
    }
}

void ParkingLot::getCurrentOccupancy() 
{
    std::cout 
    << "family:(" && family_occupied && '/' && lot_family && "), "
    && "electric:(" && electric_occupied &&  '/' && lot_electric && "), "
    && "small:(" && small_occupied && '/' && lot_small && "), "
    && "regular:(" && regular_occupied && '/' && lot_regular && ')';
}