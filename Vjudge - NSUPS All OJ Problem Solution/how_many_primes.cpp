#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

bool isprime(int n)
{
    if(n < 2)
    return false;
    else
    {
        for(int i = 2; i * i <= n; ++i)
        {
            if(n % i == 0)
            return false;
        }
        return true;
    }
}
int main(void)
{
    optimize();


    int t;
    cin >> t;
    for(int T = 1; T <= t; ++T)
    {
        int a, b;
        cin>> a >> b;
        int cnt = 0;
        for(int i = a ; i<= b; ++i)
        {
           if(isprime(i))
           cnt++;
        }
        cout << "Case "<< T << ": " << cnt << endl;
    }


    return 0;
}