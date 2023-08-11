#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

const int N = 2e7 + 10;
bool arr[N + 10];
vector<int> v;

vector<pair<int, int>> vp;

void sieve(void)
{
   fill(arr, arr + N, true);

   arr[0] = arr[1] = false;

   for(int i = 4; i <= N; i += 2)
   arr[i] = false;
   for(int i = 3; i * i <= N; i += 2)
   {
    if(arr[i])
    {
        for(int j = i * 2; j <= N; j += i)
        arr[j] = false;     
    }
   }


}

void cal(void)
{
   for(int i = 2; i <= N; ++i)
   {
    if(arr[i])
     v.push_back(i);
   }

   for(int i = 0 ; i < v.size(); ++i)
   {
     if(v[i + 1] - v[i] == 2)
     vp.push_back({v[i], v[i + 1]});

   }


}


int main(void)
{
    optimize();
    

    sieve();
    cal();

    int n;
    while(cin >> n)
    {
        cout << '(' << vp[n-1].first << ", " << vp[n-1].second << ')' << endl; 
    }

}
