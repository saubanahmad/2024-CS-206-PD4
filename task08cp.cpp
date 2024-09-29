#include <iostream>
using namespace std;

void pet(int holidays);

main()
  {
   int holidays;

   cout<<"Holidays: ";
   cin>> holidays;

   pet(holidays);
  }

void pet(int holidays)
  {
   int workingDays, games ,difference, hrs, mins;
 
   workingDays = 365- holidays;
   games = (workingDays*63) + (holidays*127);
   difference = 30000 - games ;
   hrs= difference/60 ;
   mins= difference - hrs*60;

   if ( difference > 0)
      {
       cout<<"Tom sleeps well"<<endl;
       cout<< hrs <<" hours and "<<mins <<" minutes less for play";
      }

   if ( difference < 0)
      {
       cout<<"Tom will run away"<<endl; 
       cout<< -hrs <<" hours and "<< -mins <<" minutes for play";
      }
  }



