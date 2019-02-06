// header file for users
#include <string>

using namespace std;

class User {
  private:
    // member variables

    string username;
    string userAccountType;
    float availableCredit;

  public:
    // constructor
    User(string username, string userAccountType, float availableCredit);

    // other built in methods
    string stringRepresentation(string username, string userType, float userCredit);
    float getAvailableCredit();
    void updateAvailableCredit(float credit);
    void createUser();
    void deleteUser(string username);
    void sellTickets();
    void buyTickets();
    void refund();
    void addCreditStandardMode();
    void addCreditAdminMode();

};
