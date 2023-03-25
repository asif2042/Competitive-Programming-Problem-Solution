#include<bits/stdc++.h>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(void)
{
    optimize();

    string d1;
    string d2;

    int h1, h2, m1, m2, s1, s2, m, h, s, t1, t2, t, day1, day2;

    char ch;

    cin>>d1;
    cin>>day1;
    cin>>h1>>ch>>m1>>ch>>s1;

    cin>>d2;
    cin>>day2;
    cin>>h2>>ch>>m2>>ch>>s2;

    t1 = day1 * 24;
    t1 = t1 + h1; 
    t1 = t1 *60 ;
    t1 = t1 + m1;
    t1= t1 * 60;
    t1 = t1 + s1;// converting to seconds

     t2 = day2 * 24;
    t2 = t2 + h2; 
    t2 = t2 *60 ;
    t2 = t2 + m2;
    t2= t2 * 60;
    t2 = t2 + s2;// converting to seconds

    t = t2 - t1;

    

   
   // now time is in seconds. we need to convert in day, hrs, min, sec

   s1 = t % 60;
   t = t / 60;
   m1 = t % 60;
   t = t / 60;
   h1 = t % 24;
   day1 = t / 24;



// now it is time display our time

/*
W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)
*/

cout<<day1<<" "<<"dia(s)"<<endl;
cout<<h1<<" "<<"hora(s)"<<endl;
cout<<m1<<" "<<"minuto(s)"<<endl;
cout<<s1<<" "<<"segundo(s)"<<endl;

  


    return 0;
}