#include <iostream>
using namespace std;

void country(string name ,float priceBefore, float priceAfter);

main(){
 string name;
 float priceBefore, priceAfter;
 while(true)
   {
    country(name, priceBefore, priceAfter);
   }
}

void country(string name, float priceBefore, float priceAfter)
{

 cout<<"Enter the country's name: ";
 cin>> name;
 cout<<"Enter the ticket price in dollars: $";
 cin>> priceBefore;
 if(name == "Pakistan")
   {
    priceAfter = priceBefore-(5*priceBefore/100);
   }
 if(name == "Ireland")
   {
    priceAfter = priceBefore-(10*priceBefore/100);
   }
 if(name == "India")
   {
    priceAfter = priceBefore-(20*priceBefore/100);
   }
 if(name == "Enlgland")
   {
    priceAfter = priceBefore-(30*priceBefore/100);
   }
 if(name == "Canada")
   {
    priceAfter = priceBefore-(45*priceBefore/100);
   }
 cout<<"Final ticket price after discount is: $" << priceAfter<<endl;
 

}