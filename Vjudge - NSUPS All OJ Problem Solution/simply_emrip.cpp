#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;


       heyBro:
    
     while(cin >> n)
     {
       for(int i = 2 ; i * i <= n; ++i)
       {
        if(n % i == 0)
        {
            cout<< n << " is not prime."<< endl;
            goto heyBro;
        }
       }

       string s = to_string(n);
       reverse(s.begin(), s.end());
       int rev = stoi(s);
       for(int i = 2 ; i * i <= rev; ++i)
       {
        if(rev % i == 0)
        {
            cout<< n << " is prime."<< endl;
          goto heyBro;
        }
       }
       cout << n << " is emirp."<< endl;



       
       
     }



    return 0;
}