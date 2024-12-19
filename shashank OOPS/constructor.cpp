                 //8
#include<bits/stdc++.h>
using namespace std;

class User{
public:
   string firstname;
   string lastname;
   int Age;
   string email;

   User(string fname,string lname,int age){
     firstname=fname;
     lastname=lname;
     Age=age;
     email=fname+"."+lname+"@gmail.com";
   }

};

void print(User user){
   cout<<user.firstname<<" "<<user.lastname<<" "<<user.Age<<endl;
}

int main()
{
    User user1("shashank","sri",24);
    User user2("deepak","raj",24);

    print(user1);
    print(user2);

   
}