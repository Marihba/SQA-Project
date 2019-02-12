/*
Focus of this class is to define all the necessary information that are crucial
regarding Events. The event class accomodates for ticket information as well.

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.02
@since  2019-02-07                                                            */

#include <iostream>

using namespace std;

//~~~~~~~~~~~~~~~~~Constructor methods for User class~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
A constructor that creates a user object. Needed to implement any functionality
regarding events and their respective ticket holders.
@param name     First param is a string for the event's name
@param host     Second param is a string for the name of the seller
@param hostName Third param is an unsigned int for the number of tickets      */
Event::Event(string name, string host, unsigned int numTickets) {
  this->eventName = name;
  this->hostName = host;
  this->ticketsAvailable = numTicket;
}
