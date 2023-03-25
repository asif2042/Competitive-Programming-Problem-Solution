#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    string s;
    while(cin >> s, s != "#")
    {
        if(next_permutation(s.begin(), s.end()))
        cout << s << endl;
        else 
        cout << "No Successor" << endl;
    }


    return 0;
}