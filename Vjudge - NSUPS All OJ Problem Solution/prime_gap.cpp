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

    int k = 0 , l = 0, r = 0;
    while(cin>> k && k)
    {
        if(isprime[k])
        cout << 0 << endl;
        else
         {
            for(int i = k - 1; i > 1; --i)
            {
                if(isprime[i])
                {
                    l = i;
                    break;
                }
            }

             for(int i = k + 1;  ; ++i)
            {
                if(isprime[i])
                {
                    r = i;
                    break;
                }
            }

              cout << r - l << endl;
         }

       
    }




    


    return 0;
}