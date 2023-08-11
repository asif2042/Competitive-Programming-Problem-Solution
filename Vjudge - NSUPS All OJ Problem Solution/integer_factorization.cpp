#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    long long n;
    
 
    int t = 10;
    while(t--)
    {

          vector <pair< long long , long long>> vp;
        cin >> n;
        if(!n)
        return 0;

        for(long long i = 2; i * i <= n; ++i)
        {
            if(n % i == 0)
            {
                int cnt = 0;
                while(n % i == 0)
                {
                 ++cnt ;
                 n /= i;
                }
             vp.push_back({i, cnt});
          }

        }
         if(n > 1)
          vp.push_back({n , 1});

        for(auto u : vp)
        {
            cout << u.first << "^" << u.second << " ";
        }
        cout << endl;
    }


    return 0;
}