#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int lim =  1e7 + 10;
vector<long long> v(lim, -1);


long long arr[lim + 10];

void sieve(void)
{
    fill(arr, arr + lim, 0);
   

   
    for(int i = 1; i <= lim ; ++i)
    {  
            for(int j = i; j <= lim; j += i)
            arr[j] += i; 

            if(arr[i] > lim)
            continue;

            if(v[arr[i]] == -1)
            v[arr[i]] = i;       
    }

    


}


int main(void)
{
    optimize();

    sieve();
    int c , t;
    cin >> t;
    while(t--)
    {
        cin >> c;
        cout << v[c] << endl;
    }
  
    

    return 0;
}