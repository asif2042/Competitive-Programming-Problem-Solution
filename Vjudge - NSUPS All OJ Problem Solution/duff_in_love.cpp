#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    vector <long long int> v;
    long long int n, result = 0;
    cin >> n;

    for(long long int i = 1; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            v.push_back(i);
            if(i != n/i)
            v.push_back(n/i);
        }
    }
   

   sort(v.begin(), v.end());
   long long int sz = v.size();
    for(long long int i = sz - 1; i >= 0;i--)
    {
       bool l = true;
        for(long long int j = 2; j * j <= v[i]; ++j)
        {
            if(v[i] % (j * j) ==0)
            {
            l = false;
            break;
            }

        }
        if(l)
        {
            result = v[i];
            break;
        }
    }
    cout << result << endl;




    return 0;
}