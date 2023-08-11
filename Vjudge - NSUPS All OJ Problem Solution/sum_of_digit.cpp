#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        long long int sum= 0;
        int n = 0;
        for(auto u: s)
        {
            
            sum = sum + u - '0';
        }
        cout << sum << endl;
    }

    return 0;
}