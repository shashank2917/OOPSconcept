                                 //(7)
#include<bits/stdc++.h>
using namespace std;

class smartphone{

    public:
      virtual void Takeaselfie()=0;

};
 
class Android:public smartphone{

    public:

    void Takeaselfie(){
        cout<<"android selfie" <<endl;
    }
};

class Iphone:public smartphone{

    public:

    void Takeaselfie(){
        cout<<"Iphone selfie" <<endl;
    }
};


int main()
{

smartphone *s1 = new Android();
smartphone *s2 = new Iphone();
s1->Takeaselfie();
s2->Takeaselfie();

}