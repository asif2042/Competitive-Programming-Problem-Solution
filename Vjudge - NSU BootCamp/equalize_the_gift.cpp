// Error code. it won't be successfully submitted

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

        long long int cnt = 0;
        int n; 
        cin >> n;
        int a[n];
        int b[n];
        int a_min ;
        int b_min ;

        for(int i = 0; i < n; ++i)
        {

            if(!i)
            {
            cin >> a[i];
            a_min = a[i];
            }

            else
            {
            cin >> a[i];
            if(a[i] < a[i-1])
            a_min = a[i];

            }

            
            
        }
        for(int i = 0; i < n; ++i)
        {

            if(!i)
            {
            cin >> b[i];
            b_min = b[i];
            }

            else
            {
            cin >> b[i];
            if(b[i] < b[i-1])
            b_min = b[i];

            }   
            
        }

        for(int i = 0; i < n; ++i)
        {

            if(b[i] > b_min && a[i] > a_min)
            {
                int d=0;
                if((a[i] - a_min) < b_min)
                {
                
                d = a[i] - a_min;
                cnt += d;
                a[i] -= d;
                b[i] -= d;

                }
                else
                {

                d = b[i] - b_min;
                cnt += d;
                a[i] -= d;
                b[i] -= d;

                }

            }
            if(a[i] > a_min)
            {
                cnt += a[i] - a_min;

            }
            if(b[i] > b_min)
            {
                cnt += b[i] - b_min;
            }
        }
         

         cout << cnt << endl;

    }


    return 0;
}