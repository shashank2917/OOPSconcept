#include<bits/stdc++.h>           //(2)
using namespace std;

class YoutubeChannel{

private:
    string name; 
    string ownername;
    int subscount;
    list<string>publishedvedio;

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


int main()
{
   
   YoutubeChannel ytchannel("code wallah","shashank");


//    ytchannel.publishedvedio.push_back("css");    It will not work as it cannot access the values in the private;
//    ytchannel.publishedvedio.push_back("c++");
//    ytchannel.publishedvedio.push_back("c");              //we make multiple object of same class and we dont have to write everything manually because of constructor;

      ytchannel.subscribe();
      ytchannel.subscribe();
      ytchannel.subscribe();
      ytchannel.publishedvediotitle("intro to c++");
      ytchannel.publishedvediotitle("intro to oops");

 
      ytchannel.getinfo(); 
}