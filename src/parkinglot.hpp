#pragma once
#include <chrono>

enum lot_type
{
    family,
    electric,
    small,
    regular
};

class ParkingLot
{
private:
    int lot_family;
    int family_occupied;
    int lot_electric;
    int electric_occupied;
    int lot_small;
    int small_occupied;
    int lot_regular;
    int regular_occupied;

public:
    ParkingLot(int, int, int, int);
    ~ParkingLot();
    void occupyLot(lot_type);
    void releaseLot(lot_type);
    void getCurrentOccupancy();
};
