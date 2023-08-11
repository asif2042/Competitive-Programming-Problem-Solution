#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);//cin.tie(0);cout.tie(0);
#define endl '\n'

int main(void)
{
    optimize();
    
    int a[4];
    char ch;
    int t;
    cin >> t;
   for(int T = 1; T <= t; ++T)
    {
   
    cin  >> a[0] >> ch >> a[1]>> ch >> a[2]>> ch >> a[3];
    string s, str;
    cin >>str;
    
   for (int j = 0; j < 4; ++j)
   {
       int n = 256;
       int i;
    for(i = 0; i < 8; ++i)
    {
         n = n / 2;
       
        if(a[j] >= n )
        {
            s.push_back('1');
            a[j] = a[j] - n;
        }
        else 
        s.push_back('0');
    }
    if(j != 3 && i != 7)
    s.push_back('.');
    
   }
 if(s == str)
 cout <<"Case "<<T<<": Yes"<< endl;
 else
  cout <<"Case "<<T<<": No"<< endl;
  
 
    
    }
    
    
}