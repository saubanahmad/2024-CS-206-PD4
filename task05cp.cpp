#include <iostream>
using namespace std;

void possibleBonus(int you, int frnd);

main()
{
 int you, frnd;
 cout<<"Enter your position: ";
 cin>> you;
 cout<<"Enter your friend's position: ";
 cin>> frnd;
 possibleBonus(you , frnd);
}

void possibleBonus(int you, int frnd)
{
 if (frnd-you > 6)
 {
  cout<<"false";
 }
 if (frnd-you <= 6)
 {
  cout<<"true";
 }
 
}
