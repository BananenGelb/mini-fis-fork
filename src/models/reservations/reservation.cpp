#include "reservation.h"

Reservation::Reservation(std::string const& from, std::string const& to)
    : from(from)
    , to(to)
{
}

bool Reservation::isEmpty() const
{
    // TODO
    if (from.empty() && to.empty()){
        return true;
    }

    return false;
}

std::string Reservation::getDisplayText() const
{
    // TODO
   
    return from + " - " + to;


    
}
