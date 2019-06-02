#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;
class  Package
{
public:
    Package(const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double );
      //Sender information
      void setSenderName(const string &);
      string getSenderName()const;
      void setSenderAddress(const string&);
      string getSenderAddress()const;
      void setSenderCity(const string&);
      string getSenderCity()const;
      void setSenderRegion(const string&);
      string getSenderRegion()const;
      void setSenderZIP( int);
      int getSenderZIP()const;


       //Recipient information
      void setRecipientName( const string & );
      string getRecipientName() const;
      void setRecipientAddress( const string & );
      string getRecipientAddress() const;
      void setRecipientCity( const string & );
      string getRecipientCity() const;
      void setRecipientRegion( const string & );
      string getRecipientRegion() const;
      void setRecipientZIP( int );
      int getRecipientZIP() const;

      void setWeight(double);
      double getWeight()const;
      void setUnitPrice(double);
      double getUnitPrice()const;

      virtual double weightCost()const;

private:
     string senderName;
     string senderAddress;
     string senderCity;
     string senderState;
     int senderZIP;
     string recipientName;
     string recipientAddress;
     string recipientCity;
     string recipientRegion;
     int recipientZIP;

     double weight;
     double costUnitPrice;

};

#endif // PACKAGE_H_INCLUDED
