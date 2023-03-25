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
        int ev = 0, od = 0;
        int arr[n];
        for(int i = 0; i< n; ++i)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            ev += arr[i];
            else
            od += arr[i];
        }
        if(ev > od)
        cout << "YES" << endl;
        else
        cout  << "NO" << endl;
    }


    return 0;
}