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
       long long int n , a, b;
       cin >> n >> a >> b;
       if( a == 1) 
       {
        if((n -1 ) % b == 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
        continue;

       }
       long long int num = 1;
       int flag = 1;
       while(num <= n)
       {
        if((n - num) % b == 0)
        {
            cout << "YES" << endl;
            flag = 0;
            break;
        }
        num *= a;
       }
       if(flag)
       cout << "NO" << endl;
       
       
    }


    return 0;
}

