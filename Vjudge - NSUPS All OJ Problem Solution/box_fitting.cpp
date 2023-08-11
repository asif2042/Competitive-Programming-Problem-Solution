// error code
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
const int N = 1e7 + 10;
int a[N];


int main(void)
{
    optimize();


    int t;
    cin >> t;
    while(t--)
    {
        long long sum = 0, h;
        int n, w;
        cin >> n >> w;
        for(int i = 0; i < n; ++i)
         {
            int tmp ; 
            cin >> tmp;
            sum += tmp;


         } 
         h = sum / w;
         if( sum % w != 0)
        ++h;
        cout << h << endl;

    }


    return 0;
}