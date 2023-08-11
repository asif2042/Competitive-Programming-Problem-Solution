#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'


int main(void)
{
    optimize();
    char ch;
    string s;

    while(getline(cin, s))
    {
    map<char, int> m;
    
    //string s;
    //cin >> ch;
  // getline(cin , s);
   // s = ch + s;
    

    


   
   
    int mx = 0;
    for(auto u: s)
    {
     if(isalpha(u))
     {
        m[u]++;
        mx = max(mx , m[u]);
     }
    }

    for(auto u: m)
    {
       if(u.second == mx)
       cout<<u.first;
    }
    cout<<" "<< mx<<endl;

    


    }



    return 0;
}