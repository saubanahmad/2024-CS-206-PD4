#include <iostream>
using namespace std;

void reverse(string entry);

main()
{
 string entry;

 reverse(entry);


}

void reverse(string entry)
{
 cout<<"Enter 'true' or 'false': ";
 cin>>entry;
   if(entry == "true")
    {
     cout<<"false";
    }
   if(entry == "false")
    {
     cout<<"true";
    }
  
}
