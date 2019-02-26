/*
Header file for the Event class. Declares all the necessary
information for the main methods of the Event class.

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.02
@since  2019-02-07                                                           */

class Event {
  private:
    // member variables
    std::string eventName;
    std::string hostName;
    unsigned int ticketsAvailable;

  public:
    // constructor
    Event(std::string name, std::string host, unsigned int numTicket);
}
