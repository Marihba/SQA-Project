//header file for LoginInterface
#ifndef LoginInterface_H
#define LoginInterface_H

class LoginInterface {

  private:

    std::string username;
    std::string userAccountsFilePath;
    bool userExist;
    std::string currentUserData[3];
    bool isExistingUser(std::string usernameSubString);
    void scanForExistingUser(std::string userDataString);
    void accessUserFile();  // opens user accounts file (calls exisitng user check method)

  public:
    LoginInterface();
    void displayLogin();
    std::string* retrieveUserData();
    void exitProgram();
};

#endif
