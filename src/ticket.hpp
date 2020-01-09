#include <chrono>
#include <tuple>

class Ticket
{
private:
    time_t timestamp;
    float firstHourPrice = 1;
    float followUpHourPrice = 2;
    float dayPrice = 10;

public:
    Ticket();
    void setPrices(float, float, float);
    std::tuple<float, float, float> getPrices();
};
