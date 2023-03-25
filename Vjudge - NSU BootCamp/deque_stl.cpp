/*
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
const int num = -(1e5 + 10);
int main(void)
{
    optimize();


    int t ;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >>n >>k;
        int arr[n];
        for(int i = 0 ;  i < n ; ++i)
        cin >> arr[i];
        for(int i = 0; i < (n + 1 - k); ++i)
        {
            int max = num;
            for(int j = i; j < (i + k); ++j)
            {
                if( max < arr[j])
                {
                    max = arr[j];
                }
            }
            cout << max << " ";
        }
        cout << endl;
    }


    return 0;
}
TLE 
complexity = O(T*N*N)
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
const int num = -(1e9 + 10);
int main(void)
{
    optimize();


    int t ;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >>n >>k;
        int arr[n];
         int max = num;
         int cnt = 1;
         for(int i =0; i < n; ++i)
         cin >> arr[i];

        for(int i = 0 ;  i < n ; ++i)
        {
            if( cnt == k)
            {
                max = num;
                cnt = 1;
                arr[i] = max;
                if(i != n - 1)
                i =  i + 1 - k;
                
                
            }
        // pre computation : hashing 
        if(max < arr[i])
        max = arr[i];
       
        ++cnt;

        }
       for(int i = k - 1; i < n; ++i)
       cout <<  arr[i] << ' ';
        cout << endl;
    }


    return 0;
    // complexcity = O(N*T)
}
