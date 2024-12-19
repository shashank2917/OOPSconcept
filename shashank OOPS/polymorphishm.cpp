#include<bits/stdc++.h>             //(4)
using namespace std;

class YoutubeChannel{

private:
    string name; 
    
    int subscount;
    list<string>publishedvedio;
protected:
    string ownername;
    int contentquality;

public:
    YoutubeChannel(string Name,string Ownername){  //this is why we need constructor
        name=Name;
        ownername=Ownername;
        subscount=0;
        contentquality=0;

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

    void subscribe()     //these are methods
    {
        subscount++;
    }
    void unsubscribe()    //these are methods
    {   
        if(subscount>0)
             subscount--;
    }
    void publishedvediotitle(string title)    //these are methods
    {
        publishedvedio.push_back(title);
    }

    void checkanalitics(){                                          //these are methods
        if(contentquality<3)cout<<name<<" has bad quality"<<endl;
        else cout<<name<<" has good qality"<<endl;
    }
 };



 // 2nd class downward  DERIVED CLASS

class cookingchannel:public YoutubeChannel{

public:
    cookingchannel(string Name,string Ownername):YoutubeChannel(Name,Ownername){ //BASE CLASS CONSTRUCTOR knows how to initialise those two argument therefore 

    }
    void practice(){
        cout<<ownername<<" "<<"I am practicing"<<endl;
        contentquality++;     //variable
    }
    
 };

//singeryoutubechannel

 class singeryoutubechannel:public YoutubeChannel{
    public:
    singeryoutubechannel(string Name,string Ownername):YoutubeChannel(Name,Ownername){

    }

      void practice(){
        cout<<ownername<<" "<<"I am singer"<<endl;
        contentquality++;
    }
 };


int main()
{
   
  cookingchannel ytchannel("apna kitchen","shashank");
  singeryoutubechannel singchannel("mesings","amit");
  ytchannel.practice();
   singchannel.practice();
   singchannel.practice();
   singchannel.practice();
   singchannel.practice();
   singchannel.practice();
   singchannel.practice();


   //polymorphishm uses pointer

   YoutubeChannel *yt1=&ytchannel;    //pointer of base class can point variable of derived class
   YoutubeChannel *yt2=&singchannel;

   yt1->checkanalitics();
   yt2->checkanalitics();

}

//if we use protected on place of private for only ownername then it can be accessible in the derived class