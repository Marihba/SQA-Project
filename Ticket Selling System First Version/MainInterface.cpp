// main interface for communication with the users
#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>

using namespace std;


class MainInterface {

  private:
    vector<string> dailyTransactionsLog;

  public:
    void displayLoginInterface();
    void displayUserProfile(); //displays user and this will also initialize a User class and store user information
    void appendToTransactionLogList();
    void endSession();
    void writeToDailyTransaction(vector<string> data);
};

void MainInterface::displayLoginInterface() {
  //Initializes Login Interface class and works with it
}

void MainInterface::displayUserProfile() {
  //displays user profile
  cout << "Welcome to TSS!!" << "\n" << "\ta portal just for " <<
  "getting the most fire deals on hit popular event tickets" << endl;
}

void MainInterface::appendToTransactionLogList() {

}

void MainInterface::endSession() {

}

void MainInterface::writeToDailyTransaction(vector<string> data) {
  //this writes to the *output file*

  ofstream myfile;
  myfile.open ("Daily_Transaction_Output_File.txt");
  for(vector<string>::iterator it = data.begin(); it != data.end(); ++it) {
    myfile << *it << endl;
  }
  myfile.close();
}

int main() {

  cout << "Succesfully Executed!" << endl;

  return 0;
 }

