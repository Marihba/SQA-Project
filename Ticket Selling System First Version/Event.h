/*
Header file for the Event class. Declares all the necessary
information for the main methods of the Event class.

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.02
@since  2019-02-06                                                            */

using namespace std;

class Event {
  private:
    // member variables
    string eventName;
    string hostName;
    unsigned int ticketsAvailable;
    
  public:
    // constructor
    Event(string name, string host, unsigned int numTicket);
}
