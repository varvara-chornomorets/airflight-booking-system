#pragma once
#include <iostream>
#include <string>
#include "seat.h"
#include <vector>

class Flight
{
	private:
    std::string id;
    std::string date;
    std::vector<Seat> seats; 

public:
    // Constructor to initialize the object
    // if i understand it correctly, that defining seats i take a reference to s (so no copying) 
    Flight(const std::string& n, std::string d, std::vector<Seat>& s) : id(n), date(d), seats(s) {}
};

