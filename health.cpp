/*
This code is made for a 65 year old woman to take care of her health and make her life more comfortable.
Funtions we providing are-
   *Ask about their health and WHOM THEY WANT TO CONTACT FOR HELP.
   *Check today's SCHEDULE for taking medinices .
   *Show some health TIPS.
*/

#include<bits/stdc++.h>
//#include<string.h>
using namespace std;

struct sed
{
    string medicine;
    string food;
    string other;
     
}p[7];


struct person
{
    char name[50];
     long no;
}s[4];


void notok()
{
    int c3;                                                              //Here user will get some choices.
    cout<<"\nWhom to do you want to contant?\nEnter choice[1/2/3/4]\n";
    cout<<"\n\t1.Husband\n\t2.Son\n\t3.Family doctor\n\t4.Dial 102\n";
    cin>>c3;
      cout<<"\t_____________________________________________\t\n";
    switch (c3)
    {
    case 1:cout<<"\nCALL HUSBAND--"<<s[0].no;break;
    case 2:cout<<"\nCALL SON--"<<s[1].no;break;
    case 3:cout<<"\nCALL DOCTOR--"<<s[2].no;break;
    case 4:cout<<"\nCALL 102--"<<s[3].no;break;   

    
    default:cout<<"\nInvalid Choice";
        break;
    }    
}

void schedule()
{
   int s; 
  cout<<"\nWhat day is today?\n\t1.Monday\n\t2.Tuesday\n\t3.Wednesday\n\t4.Thursday\n\t5.Friday\n\t6.Saturday\n\t7.Sunday\n";
  cin>>s;
      cout<<"\t_____________________________________________\t\n";
  cout<<"\nTODAYS SCHEDULE";
  switch (s)
  {
    
    case 1:cout<<"\n\tMedicine--"<<p[0].medicine<<"\n\tFood--"<<p[0].food<<"\n\tOther plans--"<<p[0].other;
      break;
    case 2:cout<<"\n\tMedicine--"<<p[1].medicine<<"\n\tFood--"<<p[1].food<<"\n\tOther plans--"<<p[1].other;
      break;
    case 3:cout<<"\n\tMedicine--"<<p[2].medicine<<"\n\tFood--"<<p[2].food<<"\n\tOther plans--"<<p[2].other;
      break;
    case 4:cout<<"\n\tMedicine--"<<p[3].medicine<<"\n\tFood--"<<p[3].food<<"\n\tOther plans--"<<p[3].other;
      break;
    case 5:cout<<"\n\tMedicine--"<<p[4].medicine<<"\n\tFood--"<<p[4].food<<"\n\tOther plans--"<<p[4].other;
      break;
    case 6: cout<<"\n\tMedicine--"<<p[5].medicine<<"\n\tFood--"<<p[5].food<<"\n\tOther plans--"<<p[5].other;
      break;
    case 7: cout<<"\n\tMedicine--"<<p[6].medicine<<"\n\tFood--"<<p[6].food<<"\nO\tther plans--"<<p[6].other;
      break;  
  default:cout<<"\n\tInvalid Choice";
      break;
  }
}

void tips()
{
        cout<<"\t_____________________________________________\t\n";
 cout<<"\nCLICK HERE\nhttps://www.healthline.com/health/flu/seniors-guide-to-staying-healthy#2.-Take-supplements-as-necessary\n\nhttps://www.everydayhealth.com/senior-health/understanding/index.aspx\n";
}

int main()
{
    char c1,c2;
     int x,n;
                                                                  //Here we creating databases of user
                                                                    //database of contant information 
      s[0].no=774359823;     
      s[1].no=894835234;     
      s[2].no=982834334;     
      s[3].no=102; 
      
                                                                   //Schedule database
     p[0].medicine="Morning a\tEvening c";
     p[0].food="Add some green veg.";
     p[0].other="Non";

     p[1].medicine="Afternoon VIT C";
     p[1].food="Add some green veg.";
     p[1].other="BP and Sugar checkup";

     p[2].medicine="Morning a\tEvening c";
     p[2].food="Add Eggs";
     p[2].other="Non";

     p[3].medicine="After Dinner CPRO";
     p[3].food="Add some green veg.";
     p[3].other="Non";

     p[4].medicine="Morning  ZEG";
     p[4].food="Add HighFiber";
     p[4].other="Yoga classes";

     p[5].medicine="Evening XYZ";
     p[5].food="Add some green veg.";
     p[5].other="Non";
 
     p[6].medicine="Morning a\tEvening c";
     p[6].food="Add some green veg.";
     p[6].other="Non";
     
                                                                 //Main code start from here.
    cout<<"\nHi\nAre you filling well?[Y/N]\n";                       // First check if user feeling ok.
    cin>>c1;
    if (c1=='y' || c1=='Y')
    {                                                                  //If user feeling ok than give him some choices.
       cout<<"\t_____________________________________________\t\n";
       cout<<"\nMake a choice:[1/2]\n\t1.Check todays schedule\n\n2.Give me health tips\n";
       cin>>x;

       switch(x)
       {
           case 1: schedule();  break;                             //Method for Schedule check
           case 2: tips();      break;                             //Method for tips
           default:cout<<"\nInvalid Choice";
                         break;
       }     
    }
    else if (c1=='n' || c1=='N')
    {
        notok();                                                   //Method for calling help
    }
    else 
    cout<<"\nInvalid Choice";
}