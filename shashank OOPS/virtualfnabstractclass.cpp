#include<bits/stdc++.h>       //(5)
using namespace std;

class instrument{
    public:
     // void makesound()                       ----- output= instrument playing because this fn is not vertiul fn
        virtual void makesound()             //-----now this fn says if there is any implementaion of the fn in derived class then implement in the derived class
      {
        cout<<"instrument playing"<<endl;

      }
};

class acordian:public instrument{
  public:
    
   
 void makesound()                    
      {
        cout<<"acordian playing"<<endl;

      }
};

int main()
{
    // instrument *i1;
    // i1->makesound();
       
       instrument *i1=new acordian();   // instrument-base class    //new acordian()-derived class
       i1->makesound();                // if acordian have not the definition of the makesound() then it will give output of the base class makesound()

      

}