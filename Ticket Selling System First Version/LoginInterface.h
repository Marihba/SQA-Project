//header file for LoginInterface
using namespace std;

class LoginInterface {

  private:
    string username;
    string userAccountsFilePath;

  public:
    void displayLogin();
    //opens user accounts file (calls exisitng user check method)
    void accessUserFile();  
    void scanForExistingUser();
    void retrieveUserData();

    // needs to remove definition and re-implement in cpp file
    void exitProgram() {
      exit(0);
    }
};
