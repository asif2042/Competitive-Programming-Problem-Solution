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
    for(auto u: s)
    {
        if(u < 'a')
        cnt++;
    }
    cout << cnt + 1 << endl;


    return 0;
}