#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int lim = 1e7 + 10;
vector<long long> v;
vector<long long> prime;

int arr[lim + 10];

void sieve(void)
{
    fill(arr, arr + lim, 1);
   

    arr[0] = arr[1] = 0;
    for(int i = 2; i*i < lim ; ++i)
    {
       
        if(arr[i])
        {
             for(int j = i * 2; j <= lim; j += i)
                arr[j] = 0;
              
            
        }

        

        
    }
}


int main(void)
{
    optimize();

    sieve();

    for(int i = 2; i < lim ; ++i)
    {
        if(arr[i])
        prime.push_back(i);
    }

    for(int i = 0; i < prime.size() - 1; ++i)
    {
        for(int j = i + 1; j < prime.size(); ++j)
        {
            if((prime[i] * prime[j]) > 20000000)
            break;
            v.push_back(prime[i] * prime[j]);
        }
    }

    sort(v.begin(), v.end());
    int t, k;

    cin >> t;
    while(t--)
    {
        cin >> k;
        cout << v[k - 1] << endl;
    }

    return 0;
}