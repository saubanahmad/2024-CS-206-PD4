#include <iostream>
using namespace std;

void flowerShop(float redRose, float whiteRose, float tulip);

main()
{
 float redRose, whiteRose, tulip;
 cout<<"Red Rose: ";
 cin>> redRose;
 cout<<"White Rose: ";
 cin>> whiteRose;
 cout<<"Tulips: ";
 cin>> tulip;
 flowerShop(redRose, whiteRose, tulip);

}

void flowerShop(float redRose, float whiteRose, float tulip)
{
 float origprice, discprice;
 origprice = 2*redRose + 4.10*whiteRose + 2.50*tulip;
 cout<<"Original price: $"<<origprice<< endl;
 discprice= origprice- origprice*20/100;
 if (origprice <200)
   {
    cout<<"No discount applied.";
   }
 if (origprice >200)
   {
    cout<<"Price after discount: $" << discprice;
   }
}






