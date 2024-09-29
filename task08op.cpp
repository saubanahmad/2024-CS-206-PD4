#include <iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);

main() 
 {
  string nameStd1, nameStd2 ;
  float matricMarksStd1, interMarksStd1, ecatMarksStd1, matricMarksStd2, interMarksStd2, ecatMarksStd2;
 
  printMenu();

  cout<<"Enter student's name: ";
  cin>> nameStd1;
  cout<<"Enter his matric marks: ";
  cin>> matricMarksStd1;
  cout<<"Enter his inter marks: ";
  cin>> interMarksStd1;
  cout<<"Enter his ecat marks: ";
  cin>> ecatMarksStd1;
  calculateAggregate(nameStd1 , matricMarksStd1, interMarksStd1, ecatMarksStd1);
 
  cout<<"Enter student's name: ";
  cin>> nameStd2;
  cout<<"Enter his matric marks: ";
  cin>> matricMarksStd2;
  cout<<"Enter his inter marks: ";
  cin>> interMarksStd2;
  cout<<"Enter his ecat marks: ";
  cin>> ecatMarksStd2;
  calculateAggregate(nameStd2 , matricMarksStd2, interMarksStd2, ecatMarksStd2);
     
  compareMarks( nameStd1, ecatMarksStd1,nameStd2, ecatMarksStd2);
 } 

void printMenu()
 {
  cout<<"######-UNIVERSITY MANAGEMENT SYSTEM-######"<<endl; 
 }

void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
 {
  float aggregate;
  aggregate = (100*matricMarks/1100)*30/100 + (100*interMarks/550)*30/100 + (100*ecatMarks/400)*40/100 ;
  cout<< "Aggregate of " <<name<<" is: " << aggregate<<endl;
 }

void compareMarks(string nameStd1,float ecatMarksStd1, string nameStd2,float ecatMarksStd2)
 {
  if (ecatMarksStd1> ecatMarksStd2)
    {
     cout<<"Roll no.1 is "<< nameStd1<<endl;
     cout<<"Roll no.2 is "<< nameStd2;
    }
  if (ecatMarksStd1< ecatMarksStd2)
    {
     cout<<"Roll no.1 is "<< nameStd2<<endl;
     cout<<"Roll no.2 is "<< nameStd1;
    }
 }
