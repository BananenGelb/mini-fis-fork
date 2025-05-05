

#include "reservation_logic.h"

void insert_reservation(Reservation const& reservation, std::vector<Reservation>& reservations, std::vector<std::string> const& stops)
{
    // TODO
    auto from_it = std::find(stops.begin(),stops.end(),reservations.from);
    auto to_it = std::find(stops.begin(),stops.end(),reservations.to);

    if (from_it == stops.end()||to_it == stops.end()|| from_it >= to_it){
        return;
    }

    reservations.push_back(reservation);

    std::sort()

}

Reservation get_next_reservation(std::vector<Reservation> const& reservations, std::string const& next_stop, std::vector<std::string> const& stops)
{
    // TODO

    return Reservation();
}

bool is_valid_for_route(Reservation const& reservation, std::vector<std::string> const& stops)
{
    // TODO

    return true;
}
