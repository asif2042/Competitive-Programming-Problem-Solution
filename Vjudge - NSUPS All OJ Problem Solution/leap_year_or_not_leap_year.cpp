#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int getRemainder(const string &s, int divisor)
{
    
    int rem = 0;
    for(auto &x: s)
    {
        rem = (rem * 10 + (x-'0')) % divisor;
    }
    return rem;
} 

int main()
{
    optimize();
    string  s;
    bool newln = 0 ;
 
     while(getline(cin , s))
    {


        if(newln)
        cout << endl;
        newln = true;
        bool l = false;
        l = !getRemainder(s, 400) || (!getRemainder(s, 4) && getRemainder(s,100));

        
        bool b = (!getRemainder(s, 55)) && l;
        bool h = (!getRemainder(s,15)) ;

        
        if(!l && !h && !b)
        {
        cout << "This is an ordinary year."<< endl;
        //continue;
        }
        if(l)
        cout << "This is leap year."<< endl;
         
        if(h)
        cout << "This is huluculu festival year."<< endl;

        if(b)
        cout << "This is bulukulu festival year."<< endl;
     
 
    }

    return 0;
}