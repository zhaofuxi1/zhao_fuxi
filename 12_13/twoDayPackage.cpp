#include "twoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string&sName,const string&sAddress,const string&sCity,const string&sRegion,int sZIP,
                 const string&rName,const string&rAddress,const string&rCity,const string&rRegion,int rZIP,
                 double w,double cost,double Fee):  Package( sName, sAddress, sCity, sRegion, sZIP,
      rName, rAddress, rCity, rRegion, rZIP, w, cost )
                 {
                     setFlatFee(Fee);
                 }
void TwoDayPackage::setFlatFee( double fee )
{

if(flatFee<0.0)
    flatFee=0;
else
    flatFee=fee;

}



double TwoDayPackage::getFlatFee() const
{
   return flatFee;
}


double TwoDayPackage::weightCost() const
{
   return Package::weightCost() + getFlatFee();
}
