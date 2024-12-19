#include<bits/stdc++.h>
using namespace std;

class Book{
    public:
    string Title;
    string Author;
    int *rates;
    int ratecount=2;


    Book(string title,string author){
        Title=title;
        Author=author;
        rates=new int[ratecount];
        rates[0]=4;
        rates[1]=5;
    }

     ~Book(){
       
        delete []rates;     //in copy constructor when destructor remove the rates it again try to remove the array that is already freed and it will show error.to avoid this we need to declare rates as new array which point to new address.
        rates=nullptr;         
    }        

   Book(const Book &orignal){    // by using & other person can change the value of the orignal object so to avoid it we use const
      Title=orignal.Title;
      Author=orignal.Author;
    //   rates=orignal.rates;
      ratecount=orignal.ratecount;

      rates=new int[ratecount];
      for(int i=0;i<ratecount;i++){
        rates[i]=orignal.rates[i];
      }

   }


};

void printbook(Book book){
    cout<<book.Title<<endl;
     cout<<book.Author<<endl;
     float sum=0;
     for(int i=0;i<book.ratecount;i++)
     {
        sum+=book.rates[i];
     }
     cout<<"avg"<<" "<<sum/book.ratecount<<endl;

}


int main()
{
  Book book1("being bold","shashank");
  Book book2("king mentality","shashank");

  Book book3(book1);

  printbook(book1);
 
 printbook(book2);
 printbook(book3);
 

}