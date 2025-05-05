#include "vehicle.h"
#include <iostream>
#include "reservation_logic.h"

Vehicle::Vehicle()
    : next_stop("")
{
}

void Vehicle::addCoach(Coach const& coach)
{
    // TODO
    coaches.push_back(coach);
    reservations.push_back({});
}

void Vehicle::addStop(std::string const& stop)
{
    // TODO
    route.push_back(stop);
}

void Vehicle::addReservation(size_t coachIndex, std::string const& seatId, Reservation const& reservation)
{
    // TODO
    auto &seats= reservations[coachIndex]; 
    auto &seat= seats[seatId];
    insert_reservation(reservation,seat,route);
}

void Vehicle::showAllDisplays() const
{
    // TODO
    for (const auto& coach : coaches){
        coach.showAllDisplays();
    }
}

void Vehicle::showAllReservations() const
{
    // TODO
    for (int i = 0; i<coaches.size();i++){}


}

void Vehicle::setCurrentStop(size_t pos)
{
    // TODO
}

void Vehicle::arriveAtStop()
{
    // TODO
}

void Vehicle::departFromStop()
{
    // TODO
}

void Vehicle::updateSeatDisplays()
{
    // TODO
}
