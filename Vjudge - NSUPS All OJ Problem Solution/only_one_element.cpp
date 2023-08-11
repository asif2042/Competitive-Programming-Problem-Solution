
// error code. It will not successfully submitted 

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
        int a[n];
        int flag = 1;
        for(int i  = 0; i < n; ++i)
        {
        cin >> a[i];
        }
        for(int i = 1 ; i < n; ++i)
        {
            if(a[i - 1]  != a[i] && a[i - 1] + 1  != a[i] )

            flag = 0;


            
        }
        if(flag)
        cout <<"YES"<< endl;
        else
        cout << "NO" << endl;


    }


    return 0;
}