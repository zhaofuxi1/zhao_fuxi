
#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{

   vector < Package * > packages( 3 );


   packages[ 0 ] = new Package( "ZFX", "China", "QingDao", "HuangDao",
      250100, "ZFJ", "China", "JiNan", "LiCheng", 250101, 8.5, .5 );

   packages[ 1 ] = new TwoDayPackage( "ZHill", "USA",
      "Boten", "MA", 250100, "Bob George", "21 Pine Rd", "Cambridge",
      "MA", 250101, 10.5, .65, 2.0 );

   packages[ 2 ] = new OvernightPackage( "ZND", "Japan", "Tokyo",
      "MA", 250100, "Don Kelly", "9 Main St", "Denver", "CO", 250101,
      12.25, .7, .25 );

   double totalShippingCost = 0.0;

   cout << fixed << setprecision( 2 );


   for ( size_t i = 0; i < packages.size(); i++ )
   {
      cout << "Package " << i + 1 << "\n\nSender:\n"
         << packages[ i ]->getSenderName() << '\n'
         << packages[ i ]->getSenderAddress() << '\n'
         << packages[ i ]->getSenderCity() << ", "
         << packages[ i ]->getSenderRegion() << ' '
         << packages[ i ]->getSenderZIP();
      cout << "\n\nRecipient:\n" << packages[ i ]->getRecipientName()
         << '\n' << packages[ i ]->getRecipientAddress() << '\n'
         << packages[ i ]->getRecipientCity() << ", "
         << packages[ i ]->getRecipientRegion() << ' '
         << packages[ i ]->getRecipientZIP();

      double cost = packages[ i ]->weightCost();
      cout << "\n\nCost: $" << cost << "\n\n";
      totalShippingCost += cost;
   }

   cout << "Total shipping cost: $" << totalShippingCost << endl;
}
