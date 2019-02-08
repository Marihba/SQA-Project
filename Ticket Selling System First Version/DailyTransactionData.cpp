// contains information about storing and updating information ready to display
// output file via MainInterface
#include <iostream>
#include <string>
#include "DailyTransactionData.h"
#include <iomanip> // setprecision
#include <sstream> // stringstream

using namespace std;

DailyTransactionData::DailyTransactionData() {}

DailyTransactionData::DailyTransactionData(CategoryOne, string tcode, string uname,
  string utype, float creds) {
    this->transactionCode = tcode;
    this->username = uname;
    this->userType = utype;
    this->availableCredits = creds;
}

DailyTransactionData::DailyTransactionData(CategoryTwo, string tcode, string bname,
  string sname, float refcreds) {
    this->transactionCode = tcode;
    this->username = bname;
    this->sellerUsername = sname;
    this->refundCredits = refcreds;
}

DailyTransactionData::DailyTransactionData(string tcode, string ename, string sname,
  int tnum, float tprice) {
    this->transactionCode = tcode;
    this->eventName = ename;
    this->sellerUsername = sname;
    this->numTicketsForSale = tnum;
    this->ticketPrice = tprice;
}

string DailyTransactionData::stringRepresentation() {

  string formatedStr;
  if (this->transactionCode == "01" || this->transactionCode == "02" ||
    this->transactionCode == "06" || this->transactionCode == "00") {
    formatedStr = toStrCodeTypeOne();
  }

  else if (this->transactionCode == "05") {
    formatedStr = toStrCodeTypeTwo();
  }

  else if (this->transactionCode == "03" || this->transactionCode == "04") {
      formatedStr = toStrCodeTypeThree();
  }

  return formatedStr;
}

string DailyTransactionData::toStrCodeTypeOne() {

  string format;
  string availableCredsStr = floatToPrecision(this->availableCredits, 2);

  format = this->transactionCode + ' '
    + this->username;
  format.append(15 - this->username.size() + 1, ' ');  // fills spaces
  format += this->userType + ' ';
  format.append(9 - availableCredsStr.size(), '0');  // fills zeros
  format += availableCredsStr;
  //cout << format.size() << endl;
  return format;

}

string DailyTransactionData::toStrCodeTypeTwo() {

  string format;
  string refundCredsStr = floatToPrecision(this->refundCredits, 2);

  format = this->transactionCode + ' '
    + this->username;
  format.append(15 - this->username.size() + 1, ' ');
  format += this->sellerUsername;
  format.append(15 - this->sellerUsername.size() + 1, ' ');
  format.append(9 - refundCredsStr.size(), '0');
  format += refundCredsStr;
  //cout << format.size() << endl;
  return format;

}

string DailyTransactionData::toStrCodeTypeThree() {

  string format;
  string priceStr = floatToPrecision(this->ticketPrice, 2);
  string numTicketsStr = to_string(this->numTicketsForSale);

  format = this->transactionCode + ' '
    + this->eventName;
  format.append(25 - this->eventName.size() + 1, ' ');
  format += this->sellerUsername;
  format.append(15 - this->sellerUsername.size() + 1, ' ');
  format.append(3 - numTicketsStr.size(), '0');
  format += numTicketsStr + ' ';
  format.append(6 - priceStr.size(), '0');
  format += priceStr;
  //cout << format.size() << endl;
  return format;

}

// preceision to 2 decimal places
string DailyTransactionData::floatToPrecision(float floatValue, int precision) {

  stringstream stream;
  stream << fixed << setprecision(precision) << floatValue;
  return stream.str();

}

/*
int main() {
  auto c1 = DailyTransactionData(DailyTransactionData::CategoryOne{},
     "01", "Jude", "AA", 50000.00);
  cout << c1.stringRepresentation() << endl;  auto c2 = DailyTransactionData(DailyTransactionData::CategoryTwo{},
     "05", "Jude", "Abhi", 500.00);
  cout << c2.stringRepresentation() << endl;  auto c3 = DailyTransactionData("03", "ari vevo stadium",
    "Judit", 67, 235.99);
  cout << c3.stringRepresentation() << endl;
  return 0;
}
*/
