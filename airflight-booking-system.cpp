// airflight-booking-system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Seat.h"
#include "Flight.h"


int main()
{
    std::cout << "Hello World!\n";
    Seat my_seat("A5", 20);
    int a = my_seat.getPrice();
    my_seat.setPrice(30);
    int b = my_seat.getPrice();
    Seat seat2("A4", 35);
    std::vector<Seat> seats({ my_seat, seat2 });
    Flight my_flight("AB578", "2.02.2004", seats);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file