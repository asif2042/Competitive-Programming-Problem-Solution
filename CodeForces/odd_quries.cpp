#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
const int N  = 1e5 + 10;
long long int arr[N];

int main(void)
{
    optimize();


    int t ;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        
        for(int i = 1; i<= n; ++i)
        {
            cin >> arr[i];
            arr[i] += arr[i - 1]; // prefix sum : precomputation

        }
        while(q--)
        {
            int l, r, k;
            cin >> l >> r>>k;
            long long int sum = 0;
            sum = arr[l - 1] + arr[n] - arr[r] + (r - l + 1)* k;
            if(sum % 2 != 0)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        
    }


    return 0;
}