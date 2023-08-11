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
        int n;
        cin >> n;

        if(n == 0 || n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        long long int sum = 1;


        for(int i = 2; i *  i <= n; ++i)
        {
            if(n % i == 0 )
            {
                sum += i;
                if( i != (n / i))
                sum += (n/i);

            }
        }
        cout << sum << endl;
    }


    return 0;
}