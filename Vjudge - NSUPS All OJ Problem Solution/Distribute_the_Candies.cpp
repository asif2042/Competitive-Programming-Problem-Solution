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
        long long int n;

        cin >> n;

        if (n % 2 == 0)
        n  = n /2 - 1;
        else 
        n = n / 2;
        if(n > 0)
        cout << n<< endl;
        else 
        {
            n = 0;
            cout << n << endl;
        }
    }


    


    return 0;
}