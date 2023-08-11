#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    string s;
    string str ="heidi";
    cin >> s;
    for(auto u: s)
    {
        if(u == str.front())
        str.erase(str.begin());
    }

if(str.empty())
cout << "YES" << endl;
else 
cout << "NO" << endl;


    return 0;
}