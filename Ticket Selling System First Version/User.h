// header file for users
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

    // other built in methods
    void stringRepresentation(string username, string userType, float userCredit);
    float getAvailableCredit();
    void updateAvailableCredit(float credit);
    string createUser();
    string deleteUser();
    string sellTickets();
    string buyTickets();
    string refund();
    string addCreditStandardMode();
    string addCreditAdminMode();
};
