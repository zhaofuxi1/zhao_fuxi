#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double ,double);
      void setFlatFee(double);
      double getFlatFee()const;

      virtual double weightCost()const;
private:
    double flatFee;
};

#endif // TWODAYPACKAGE_H_INCLUDED
