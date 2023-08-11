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
        int n ;
        cin >> n;

        if(n < 2)
        {
            cout << "no" << endl;
            continue;
        }
        else
        {
            int flag = 1;
            for(int i = 2; i * i <= n; ++i)
            {
                if(n % i == 0)
                {
                    cout << "no" << endl;
                    flag = 0;
                    break;
                }
            }
            if(flag)
            cout << "yes" << endl;
        }

        /*
        if(n  == 2 || n  == 3)
        {
            cout << "yse"<< endl;
            continue;
        }
        else if(n % 2 == 0 || n % 3 == 0)
        {
            cout << "no" << endl;
        }
        else if(n < 3)
        {
            cout << "no" << endl;
        }
        else
        {
            bool flag = 1;
            for(int i = 5; i * i <= n; i +=6)
            {
                if(n % i == 0)
                {
                cout << "no" <<endl;
                flag = 0;
                break;

                }
                else if(n % ( n - 2) == 0 || n % (n + 2)== 0)
                {
                    cout << "no" << endl;
                    flag = 0;
                    break;
                }
            }
            if(flag)
            cout << "yes" << endl;
            
        }

      */
    }
    


    return 0;
}