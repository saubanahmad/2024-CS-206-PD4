#include <iostream>
#include <windows.h>
using namespace std;
 
void h();
void a();
void s();
void n();
void gotoxy(int x, int y);

main()
 {
 
  system("cls");
 
  h();
  a();
  s();
  a();
  n();
 }

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void h()
{
cout<<"   ####     ####"<<endl;
cout<<"    ##       ##   "<<endl;
cout<<"    ##       ##    "<<endl;
cout<<"    ##       ##"<<endl;
cout<<"    ###########"<<endl;
cout<<"    ##       ## "<<endl;
cout<<"    ##       ##"<<endl;
cout<<"   ####     ####"<<endl;
cout<<"                       "<<endl; 
}


void a()
{
cout<<"       #####"<<endl;
cout<<"     ##     ##   "<<endl;
cout<<"    ##       ##    "<<endl;
cout<<"    ##       ##"<<endl;
cout<<"    ###########"<<endl;
cout<<"    ##       ## "<<endl;
cout<<"    ##       ##"<<endl;
cout<<"   ####     ####"<<endl;
cout<<"                       "<<endl;
}

void s()
{
cout<<"      ######"<<endl;
cout<<"    ##      ##     "<<endl;
cout<<"    ##          "<<endl;
cout<<"     #####        "<<endl;
cout<<"        #####   "<<endl;
cout<<"            ## "<<endl;
cout<<"    ##      ##"<<endl;
cout<<"      ######"<<endl;
cout<<"                       "<<endl;
}

void n()
{
cout<<"   ####     ####"<<endl;
cout<<"    ####     ##   "<<endl;
cout<<"    ## ##    ##    "<<endl;
cout<<"    ##  ##   ##"<<endl;
cout<<"    ##   ##  ##"<<endl;
cout<<"    ##    ## ## "<<endl;
cout<<"    ##     ####"<<endl;
cout<<"   ####     ####"<<endl;
cout<<"                       "<<endl;
}


