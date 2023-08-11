#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int N = 1e7 + 10;
vector<int > v(N + 1, 1);

void sieve(void)
{
    v[0] = v[1] = 0;
    for(int i = 2; i * i <= N; ++i)
    {
        if(v[i])
        {
        for(int j = i * 2; i <= N; j += i)
        ++v[j];
        }
    }
    
}


int main(void)
{
    optimize();

    int t;
    while(cin >> t)
    {
        int n; 
       cin>> n;
       int cnt = 0;
       while(n--)
       {
        int num ;
        cin >> num;
        if(v[num] == 2)
        ++cnt;
       }
       cout << cnt << endl;
     
    }


    return 0;
}