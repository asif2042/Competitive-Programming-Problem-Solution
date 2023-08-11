#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); //cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();

  int n;
  map<int , int > m;
 vector<int> v;
    while(cin >>n){
        if(m.count(n) == 0)
        {
          v.push_back(n);
          m[n]++;
        }
        else
        m[n]++;
        
    }
    for(auto u : v)
    {
        cout << u << " " << m[u] << endl;
    }

    return 0;
}