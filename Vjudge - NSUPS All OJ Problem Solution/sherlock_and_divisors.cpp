#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i * i <= n; ++i)
        {
            if(n % i == 0 )
            {
                if(i % 2 == 0)
                ++cnt;
                if(i != (n/i) && (n/i) % 2 == 0)
                ++cnt;
            }
                  
        }
         cout << cnt << endl;

    }
   


    return 0;
}