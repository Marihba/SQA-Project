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
    string stringRepresentation(string username, string userType, float userCredit);
    float getAvailableCredit();
    void updateAvailableCredit(float credit);
    void createUser();
    void deleteUser();
    void sellTickets();
    void buyTickets();
    void refund();
    void addCreditStandardMode();
    void addCreditAdminMode();
};
