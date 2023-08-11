#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();

    int n;
    cin >> n;
    map<int, int > m;
    for(int  i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        m[num]++;
    }
    int cnt = 0;
    for(auto  u : m)
    {
        if(u.second >= u.first)
        cnt += u.second - u.first;
        else
        cnt += u.second;

    }
    cout << cnt << endl;
}