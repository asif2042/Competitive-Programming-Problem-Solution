#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n , k;
    cin >> n >> k;

    vector<int> v;
    int tmp = 2;
   while(tmp * 2 < n)
   {
    v.push_back(2);

   }
   for(auto u : v)
   cout << u << ' ';
   if(n % tmp != 0)
   cout << (n)
    


    return 0;
}