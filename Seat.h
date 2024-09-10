#pragma once
#include <iostream>
#include <string>

class Seat
{
private:
    std::string id;
    int price;
    bool is_booked;

public:
    // Constructor to initialize the object
    Seat(const std::string& n, int p) : id(n), price(p), is_booked(false) {}

    // Getter method for is_booked
    bool getStatus() {
        return is_booked;
    }

    // Getter method for price
    int getPrice() {
        return price;
    }

    // Setter method for is_booked
    void setStatus(bool b) {
        is_booked = b;
    }

    // Setter method for price
    void setPrice(int p) {
        price = p;
    }


};

