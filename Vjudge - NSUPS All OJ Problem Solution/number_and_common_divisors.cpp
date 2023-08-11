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
        int a,b;
        cin >> a >> b;
        int tmp = __gcd(a,b);
        
        int cnt = 0;



        for(int i = 1; i * i <= tmp; ++i)
        {

            if(tmp % i == 0)
            {
                if(i * i == tmp)
                 cnt = cnt + 1;

                 else
                 cnt += 2;

            }


        }
       cout << cnt  << endl;
    }


    return 0;
}
