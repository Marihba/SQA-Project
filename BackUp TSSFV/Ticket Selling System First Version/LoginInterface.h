/*
Header file for the LoginInterface class. Declares all the necessary
information for the main methods of the LoginInterface class.

@author Abhiram Sinnarajah & Jude AntonyRajan
@version 1.01
@since  2019-02-06                                                            */

#ifndef LoginInterface_H
#define LoginInterface_H

class LoginInterface {

  private:
    // member variables
    std::string username;
    std::string userAccountsFilePath;
    std::string currentUserData[3];

    // private methods
    bool userExist;
    bool isExistingUser(std::string usernameSubString);
    void scanForExistingUser(std::string userDataString);
    void accessUserFile();  // opens user accounts file (calls
                            // exisitng user check method).

  public:
    // constructor
    LoginInterface();

    // non constructor methods (see LoginInterface.cpp for method documentation)
    void displayLogin();
    std::string* retrieveUserData();
    void exitProgram();
};

#endif
