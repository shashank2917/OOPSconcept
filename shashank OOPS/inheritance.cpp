#include<bits/stdc++.h>              //(3)
using namespace std;

class YoutubeChannel{

private:
    string name; 
    
    int subscount;
    list<string>publishedvedio;
protected:
    string ownername;

public:
    YoutubeChannel(string Name,string Ownername){  //this is why we need constructor
        name=Name;
        ownername=Ownername;
        subscount=2000;

    }

    void getinfo()
    {
         cout<<name<<endl;
          cout<< ownername<<endl;
         cout<< subscount<<endl;
        for(string vediotitle:publishedvedio)
         {
            cout<<vediotitle<<endl;
          }
    }

    void subscribe()
    {
        subscount++;
    }
    void unsubscribe()
    {   
        if(subscount>0)
             subscount--;
    }
    void publishedvediotitle(string title)
    {
        publishedvedio.push_back(title);
    }
 };

 // 2nd class downward  DERIVED CLASS

class cookingchannel:public YoutubeChannel{

public:
    cookingchannel(string Name,string Ownername):YoutubeChannel(Name,Ownername){ //BASE CLASS CONSTRUCTOR knows how to initialise those two argument therefore 

    }
    void practice(){
        cout<<ownername<<" "<<"I am practicing"<<endl;
    }
    
 };


int main()
{
   
  cookingchannel ytchannel("apna kitchen","shashank");
  ytchannel.publishedvediotitle("chocolate cake");
  ytchannel.publishedvediotitle("banana shake");
  ytchannel.publishedvediotitle("milky bar");
  ytchannel.unsubscribe();
  ytchannel.practice();
  ytchannel.getinfo();
}

//if we use protected on place of private for only ownername then it can be accessible in the derived class