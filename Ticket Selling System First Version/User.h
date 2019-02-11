/*
Header file for the User class. Declares all the necessary
information for the main methods of the User class

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.03
@since  2019-02-05                                                            */
using namespace std;

class User {
  private:
    // member variables
    string username;
    string userAccountType;
    float availableCredit;

  public:
    // default constructor
    User();
    // constructor
    User(string username, string userAccountType, float availableCredit);

    // non constructor methods (see User class for method documentation)
    void stringRepresentation(string username, string userType,
      float userCredit);
    float getAvailableCredit();
    void updateAvailableCredit(float credit);
    string createUser();
    string deleteUser();
    string sellTickets();
    string buyTickets();
    string refund();
    string addCreditStandardMode();
    string addCreditAdminMode();
    string terminateSession();
    void resetInput();
};
