
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "commissionEmploy.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const string &, const string &,
      const string &, int, int, int, double = 0.0, double = 0.0,
      double = 0.0 );
       virtual ~ BasePlusCommissionEmployee(){}


   void setBaseSalary( double );
   double getBaseSalary() const;
   virtual double earnings() const;
   virtual void print() const;
private:
   double baseSalary;
};

#endif
