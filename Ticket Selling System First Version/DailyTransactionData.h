// header file for the DailyTransactioClass
#ifndef DailyTransactionData_H
#define DailyTransactionData_H

using namespace std;

class DailyTransactionData {
  private:
    string transactionCode;
    string username;  // use this for buyer's username as well
    string userType;
    float availableCredits;
    string sellerUsername;
    float refundCredits;
    string eventName;
    int numTicketsForSale;
    float ticketPrice;

    string toStrCodeTypeOne();
    string toStrCodeTypeTwo();
    string toStrCodeTypeThree();
    string floatToPrecision(float floatValue, int precision);

  public:
    // constructors

    //struct to differenciate between constructors with same parameter types
    struct CategoryOne{};
    struct CategoryTwo{};
    DailyTransactionData();
    DailyTransactionData(CategoryOne, string tcode, string uname, string utype, float creds);
    DailyTransactionData(CategoryTwo, string tcode, string bname, string sname, float refcreds);
    DailyTransactionData(string tcode, string ename, string sname, int tnum, float tprice);

    // string representation to store in transaction file
    string stringRepresentation();

};

#endif
