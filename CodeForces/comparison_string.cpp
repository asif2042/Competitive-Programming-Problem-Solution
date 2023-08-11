#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin>> t;
    while(t--)
      {
        string s;
        vector<int > v(300, 0);
        int ind = 150; 
        v[150] = 1;
        int cnt = 0,n;
        cin >> n;
        cin >> s;
        for(auto u : s)
        {
            if(u == '<')
            v[--ind] = 1;
            
           
            else 
            v[++ind] = 1;
            
           

        }
        for(auto u : v)
        cnt += u;
        cout << cnt << endl;
      }



    return 0;
}