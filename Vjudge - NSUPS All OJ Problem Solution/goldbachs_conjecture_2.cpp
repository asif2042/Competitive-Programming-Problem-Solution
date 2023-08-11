#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int lim = 1e7 + 10;
bool arr[lim  + 10];

void sieve(void)
{
    for(int i = 0; i < lim ; ++i)
    arr[i] = true;
    arr[0] = arr[1] = false;

    for(int i = 4; i <= lim; i += 2)
      arr[i] = false;

    
    for(int i = 3; i * i <= lim ; i += 2)
    {
        if(arr[i])
        {
            for(int j = i * 2; j < lim; j += i)
            arr[j] = false;
        }
    }
}


int main(void)
{
    optimize();

    sieve();

    int n;
    while(cin >> n && n)
    {
        int count = 0;
        for(int i = 2; i <= n/ 2; ++i)
        {
            if(arr[i] && arr[n - i])
            {
                ++count;  
            }
        }

        cout << count << endl;
       
    }


    


    return 0;
}