#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

#define endl '\n'

const int lim = 1e7 + 10;
vector<bool> isprime(lim, true);

void sieve(int n)
{

    isprime[0] = isprime[1] = false;

    for(int i = 2; i <= n; ++i)
    {
        if(isprime[i] == true)
        {
            for(int j = i * 2; j < n ; j += i)
            isprime[j] = false;

        }
    }

}

int main(void)
{
    optimize();
    sieve(lim);

    int n;
    while(cin >> n)
    {
        if(n < 3)
        cout << 1 << endl;
        else 
        cout << 2 << endl;
        
        for( int i = 2; i <= n + 1; ++i)
        {
            if(isprime[i])
            cout << 1 << " ";
            else 
            cout << 2 << ' ';
        }
    }

    return 0;
}