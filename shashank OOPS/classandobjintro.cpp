#include<bits/stdc++.h>           //(1)
using namespace std;


 class YoutubeChannel{
    public:
    string name; 
    string ownername;
    int subscount;
    list<string>publishedvedio;

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
 };

int main()
{
//   YoutubeChannel ytchannel;
//   ytchannel.name="code wallah";
//   ytchannel.ownername="Shashank";
//   ytchannel.subscount=20000;
//   ytchannel.publishedvedio={"code with c++","full stack course","oops concept"};

//   cout<<ytchannel.name<<endl;
//   cout<< ytchannel.ownername<<endl;
//   cout<< ytchannel.subscount<<endl;
//   for(string vediotitle:ytchannel.publishedvedio)
//   {
//     cout<<vediotitle<<endl;
//   }



// for second channel we have to copyabove code once again;



YoutubeChannel ytchannel("code wallah","shashank");
ytchannel.publishedvedio.push_back("css");

ytchannel.publishedvedio.push_back("c++");

ytchannel.publishedvedio.push_back("c");              //we make multiple object of same class and we dont have to write everything manually because of constructor;



 
  ytchannel.getinfo();  //methods for the object to avoid redundency;
}