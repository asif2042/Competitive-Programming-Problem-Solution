#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); //cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();

  int n;
  map<int , int > m;
  unordered_set<int> s;
    while(cin >>n){
        m[n]++;
        s.insert(n);
        
    }
    vector<int> v;
    for(auto u : s)
    {
        v.push_back(u);
    }
    reverse(v.begin(), v.end());
    for(auto u : v)
    {
        cout << u << " " << m[u] << endl;
    }










   


    return 0;
}