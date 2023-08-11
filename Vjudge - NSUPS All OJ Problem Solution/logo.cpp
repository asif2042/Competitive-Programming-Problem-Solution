#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(void)
{
    optimize();
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= ((2 * n) + 1); j++)
        {
          if( j == 1 || j == n  || j == n + 2 || j == (2 * n) + 1 || (i == 1 && (j > n + 1 )) || (i == n) && (j <= n))
            cout<<"*";
            else
            cout << ' ';
        }
        cout << endl;
    }
}