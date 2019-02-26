/*
Header file for the User class. Declares all the necessary
information for the main methods of the User class

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.03
@since  2019-02-05                                                            */

class User {
  private:
    // member variables
    std::string username;
    std::string userAccountType;
    float availableCredit;

  public:
    // constructor
    User(std::string username, std::string userAccountType,
      float availableCredit);

    // non constructor methods (see User class for method documentation)
    void stringRepresentation(std::string username, std::string userType,
      float userCredit);
    float getAvailableCredit();
    void updateAvailableCredit(float credit);
    std::string createUser();
    std::string deleteUser();
    std::string sellTickets();
    std::string buyTickets();
    std::string refund();
    std::string addCreditStandardMode();
    std::string addCreditAdminMode();
    std::string terminateSession();
    void resetInput();
};
