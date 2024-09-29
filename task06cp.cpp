#include<iostream>
using namespace std;

void longestTime(int hrs, int mins);

main()
{
 int hrs, mins;
 cout<<"Enter the number of hours: ";
 cin>> hrs;
 cout<<"Enter the number of minutes: ";
 cin>> mins;
 longestTime(hrs, mins);
 
}

void longestTime(int hrs, int mins)
{
 if (hrs*60>mins)
  {
   cout<<hrs;
  }
 if (hrs*60<mins)
  {
   cout<<mins;
  }
}
