#include "overnightPackage.h"

OvernightPackage::OvernightPackage(const string&sName,const string&sAddress,const string&sCity,const string&sRegion,int sZIP,
                                   const string&rName,const string&rAddress,const string&rCity,const string&rRegion,int rZIP,
                                   double w,double cost,double Fee): Package( sName, sAddress, sCity, sRegion, sZIP,
                                               rName, rAddress, rCity, rRegion, rZIP, w, cost )
{
   setOvernightFeeUnitPrice(Fee);
}
void OvernightPackage::setOvernightFeeUnitPrice( double overnightFee )
{
 if(overnightFee < 0.0)
 overnightFeeUnitprice =0.0;
 else
    overnightFeeUnitprice=overnightFee;

}


double OvernightPackage::getOvernightFeeUnitPrice() const
{
    return overnightFeeUnitprice;
}



double OvernightPackage::weightCost() const
{
    return getWeight() * ( getUnitPrice() + getOvernightFeeUnitPrice() );
}
