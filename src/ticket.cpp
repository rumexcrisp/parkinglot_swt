#include "ticket.hpp"

Ticket::Ticket() {
    //timestamp = std::chrono::time_point<Clock,Duration>::time_since_epoch();
    timestamp = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

void Ticket::setPrices(float newFirstHourPrice, float newFollowUpHourPrice, float newDayPrice) {
    firstHourPrice = newFirstHourPrice;
    followUpHourPrice = newFollowUpHourPrice;
    dayPrice = newDayPrice;
}

tuple<float, float, float> Ticket::getPrices() {
    return new std::tuple<float, float, float> {firstHourPrice, followUpHourPrice, dayPrice};
}