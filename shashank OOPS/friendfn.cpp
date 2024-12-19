                                      //8
#include<bits/stdc++.h>
using namespace std;

class eqilateroltriangle{

private:
   float a;
   float cfc;
   float area;

public:
   void setA(float len){
    a=len;
    cfc=a+a+a;
    area=(1.73*a*a)/4;
   }

//    friend void printresults(eqilateroltriangle);   // this is a friend fn to access private datamember otside the class.
      friend class homework; //class is a friend 
};


class homework{
   public:
   void printresults(eqilateroltriangle et){
     cout<<"circum "<<et.cfc<<endl;
     cout<<"area "<<et.area<<endl;

}
};




// void printresults(eqilateroltriangle et){
//      cout<<"circum "<<et.cfc<<endl;
//    cout<<"area "<<et.area<<endl;






int main()
{
   eqilateroltriangle et;
   et.setA(3);

//    cout<<"circum"<<et.cfc;
//    cout<<"area"<<et.area<,endl;
// printresults(et);    //it is public fn to declare

homework h;
h.printresults(et);   //hear we declase class therefore we need to create object of homework class and then access it.
 }

 // friendship is not inherited
 //friendship is not mutual like in the given example homework class can access private or protected member of the equilaterol class but equilateral class cannot access the private and pprotected member of the homework class.


 // th difference between structure and classes are the all member of structre are public bydefault and we dont need the friend fn there.basaclly for overloading friend fn is very imp.