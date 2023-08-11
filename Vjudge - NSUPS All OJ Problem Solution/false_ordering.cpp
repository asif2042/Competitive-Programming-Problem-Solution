#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int N = 1000 + 1;
int arr[N];

void sieve(void)
{
    fill(arr, arr + N, 0);
   for(int i = 1;  i < N ; ++i )
   {
    for(int j = i ; j <= N ; j += i)
    ++arr[j];
   }
}

bool cmp(pair<int , int> x, pair<int , int> y)
{
    if(x.second == y.second)
    return x.first > y.first;

    return x.second < y.second;
}

int main()
{
    optimize();
     
     sieve();

     vector<pair<int, int>> v;

     for(int i = 1; i < N; ++i)
     {
         v.push_back({i, arr[i]});
     }

     sort(v.begin(), v.end(), cmp);

     int t;
     cin >> t;
     for(int T= 1; T <= t; T++)
     {
        int n;
        cin >> n;
           cout << "Case " << T << ": " << v[n - 1].first << endl;
     }




    


    return 0;
}