#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main(void)
{

    int n , k;
    cin >> n >> k;
    while(k--)
    {
        if(n% 10 != 0)
        n = n - 1;
        else
        {
            n = n / 10;
        }
    }
    cout << n << endl;
   
    return 0;
}