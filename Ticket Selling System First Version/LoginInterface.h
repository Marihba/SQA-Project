//header file for LoginInterface
#ifndef LoginInterface_H
#define LoginInterface_H

using namespace std;

class LoginInterface {

  private:

    string username;
    string userAccountsFilePath;
    bool userExist;
    string currentUserData[3];
    bool isExistingUser(string usernameSubString);
    void scanForExistingUser(string userDataString);
    void accessUserFile();  // opens user accounts file (calls exisitng user check method)

  public:
    LoginInterface();
    void displayLogin();
    string* retrieveUserData();
    void terminateSession();
};

#endif
