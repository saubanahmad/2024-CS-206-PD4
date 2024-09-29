#include <iostream>
#include<windows.h>
using namespace std;

void printMaze();
void movePlayer(int x, int y);
void gotoxy(int x, int y);


main()
 {
  int x=11, y=1;
  system("cls");
  printMaze(); 
 
  while(true)
     {
      movePlayer(x,y);
      y=y+1;
      if(y==7)
        {
         while(true)
           {
            movePlayer(x,y);
            y=y-1;
            if(y==1)
               {
                break;
               }
           }
        
        } 

     }
 }
void printMaze()
 {
  cout<<"#######################"<<endl;
  cout<<"#                     #"<<endl;
  cout<<"#                     #"<<endl;
  cout<<"#                     #"<<endl;
  cout<<"#                     #"<<endl;
  cout<<"#                     #"<<endl;
  cout<<"#                     #"<<endl;
  cout<<"#                     #"<<endl;                            
  cout<<"#######################"<<endl;
 }

void gotoxy(int x, int y)
 {
  COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }

void movePlayer(int x, int y)
 {
  gotoxy(x,y);
  cout<<"P";
  Sleep(300);
  gotoxy(x,y);
  cout<<" "; 
 }