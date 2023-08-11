#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    long long int n;
    cin >> n;
    vector<long long int > v;
    for(int i = 1; i * i <= n ; ++i)
    {
        if(n % i  == 0)
        {
            v.push_back(i);
             

             if(i != (n / i))
             v.push_back(n/i);
        }
        
    }
      sort(v.begin(), v.end());
      for(auto u : v)
      cout << u << " ";
      cout << endl;


    return 0;
}