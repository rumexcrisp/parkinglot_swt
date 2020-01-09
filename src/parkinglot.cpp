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

bool ParkingLot::hasLot(lot_type type) 
{
    switch (type)
    {
    case family:
        if (lot_family <= family_occupied) return false;
        else return true;
        break;
    case electric:
        if (lot_electric <= electric_occupied) return false;
        else return true;
        break;
    case small:
        if (lot_small <= small_occupied) return false;
        else return true;
        break;
    case regular:
        if (lot_regular <= regular_occupied) return false;
        else return true;
        break;
    default:
        std::cout << "Unknown Type!";
        return false;
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