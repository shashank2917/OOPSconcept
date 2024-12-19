                                  //9
#include<bits/stdc++.h>
using namespace std;

class Book{
    string Title;
    string Author;
    int *rates;
    int ratecount;


    Book(string title,string author){
        Title=title;
        Author=author;
        rates=new int[ratecount];
        rates[0]=4;
        rates[1]=5;
    }

    ~Book(){
        // delete rates;       //this will only delete the address but not the array.
        delete []rates;         //this will delete whole array and no leakage in memory arose.
        rates=nullptr;          // now rate point to the nullpointer

    }        
};


int main()
{

}