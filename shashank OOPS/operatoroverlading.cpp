                                    //7
 #include<bits/stdc++.h>
 using namespace std;

 struct YouTubeChannel{

    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscriberscount){
        Name=name;
        SubscribersCount=subscriberscount;
    }
 };


struct MyCollection{

    list<YouTubeChannel>mychannels;

void operator+=(YouTubeChannel& ychannel)
{
    this->mychannels.push_back(ychannel);     // hear we dont to intialise both becuse mc is already taken in the member fn.
}

 };




//  void operator<<(ostream&COUT , YouTubeChannel& channel){
    ostream& operator<<(ostream& COUT,YouTubeChannel& channel){
    COUT<<channel.Name<<endl;
    COUT<<channel.SubscribersCount<<endl;
    return COUT;
 }



ostream& operator<<(ostream& COUT , MyCollection& mc)
{
    for(YouTubeChannel ytchannel:mc.mychannels){
        COUT<<ytchannel<<endl;

    }
    return COUT;
}




 int main()
 {
    YouTubeChannel yt1=YouTubeChannel("codebeauty",50000);
    YouTubeChannel yt2=YouTubeChannel("codewallH",80000);
    //  cout<<yt1<<yt2;              //when we initialise 2 object or more we need to change the operator fn from void to the data type.

    // // operator<<(cout,yt1);   // It will give same result as above;

     MyCollection mc;
     mc+=yt1;
     mc+=yt2;
     cout<<mc;
     
}
