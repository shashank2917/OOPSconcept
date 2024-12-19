#include<bits/stdc++.h>             //(6)
using namespace std;

class instrument{     // abstract class
    public:
                       
        virtual void makesound()=0;           //pure virtual fn
    
};

class acordian:public instrument{
  public:
    
   
 void makesound()                    
      {
        cout<<"acordian playing"<<endl;    // we have to define this fn in case of abstract class and pure virtual fn

      }
};

class piano:public instrument{
  public:
     void makesound(){
        cout<<"piano is playing"<<endl;
     }
};

int main()
{
    // instrument *i1;
    // i1->makesound();
       
       instrument *i1=new acordian();   // instrument-base class    //new acordian()-derived class
      //  i1->makesound();

        instrument *i2=new piano();
      //  i2->makesound();                  //we can comment it by making an array of type instrument below

       instrument *instru[2]={i1,i2};
       for(int i=0;i<2;i++)
       {
        instru[i]->makesound();
       }

}