#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage( const string &, const string &, const string &,
                      const string &, int, const string &, const string &, const string &,
                      const string &, int, double, double, double );
    void setOvernightFeeUnitPrice( double );
    double getOvernightFeeUnitPrice() const;

    virtual double weightCost() const;
private:
    double overnightFeeUnitprice;
};




#endif
