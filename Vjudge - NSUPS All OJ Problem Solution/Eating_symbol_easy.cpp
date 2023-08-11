#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    string s;
    cin >> s;
    int cnt = 0;
    for(auto u : s)
    {
        if(u == '-')
        --cnt;
        else
        ++cnt;
    }
    
    cout << cnt << endl;






    return 0;
}