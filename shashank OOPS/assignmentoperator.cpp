//9

#include<bits/stdc++.h>
using namespace std;

class Movie{
    public:
       string Name;
       string Genre;
       float Rating;
       int Actorcount;
       string *Actors;

       Movie(string name,string genre,float rating)
       {
        Name=name;
        Genre=genre;
        Rating=rating;
        Actorcount=0;
        Actors=new string[Actorcount];
       }
       ~Movie()
       {
        delete[] Actors;
        Actors=nullptr;

       }
       Movie()
       {
          Name="";
          Genre="";
          Rating=0;
       }
       Movie(const Movie & orignal)
       {
         Name=orignal.Name;
         Genre=orignal.Genre;
         Rating=orignal.Rating;
         Actorcount=orignal.Actorcount;
         for(int i=0;i<Actorcount;i++)
         {
            Actors[i]=orignal.Actors[i];
         }

       }
       //Movie & operator=(Movie orignal)  //we can also write it,we can pass object as a copy.
       Movie& operator=(const Movie & orignal)  //this is assignment operator.
       {
          Name=orignal.Name;
          Genre=orignal.Genre;
          Rating=orignal.Rating;
          Actorcount=orignal.Actorcount;
          delete []Actors;
          for(int i=0;i<Actorcount;i++)
          {
            Actors[i]=orignal.Actors[i];
          }


          return *this;
       }

       void Addactors(string newactorname)
       {
        string *newactors=new string[Actorcount+1];
        for(int i=0;i<Actorcount;i++)
        {
            newactors[i]=Actors[i];
        }
        newactors[Actorcount]=newactorname;
        delete []Actors;
        Actors=newactors;
        Actorcount++;
       }
     
      void Printinfo()
      {
        cout<<Name<<endl;
        cout<<Genre<<endl;
        cout<<Rating<<endl;
        cout<<"Actors : "<<endl;
        for(int i=0;i<Actorcount;i++)
        {
            cout<<Actors[i]<<endl;
        }
        
        
      }

};


int main()
{
    Movie movie1("Breaking bad","reallife",9.5);
    Movie movie2("Gravity","science",9);
//     Movie movie3;
//     Movie movie4(movie1); //copy constructor

//     Movie movie5=movie4;  //copy constructor called because it copy the value of the object to the new object.
//     movie5=movie2; //it calls assignment operator becase it replaces or changes value.

   movie1.Addactors("shashank");
   movie1.Addactors("deepak");
   movie1.Addactors("amit");
   movie1.Addactors("rishav");
   movie1.Printinfo();
 }