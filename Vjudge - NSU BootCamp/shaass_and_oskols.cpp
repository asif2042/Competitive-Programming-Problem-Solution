#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();

   int n, m, a[100+2], x, y;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        a[x-1] += (y - 1);
        a[x+1] += (a[x] - y);
        a[x] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << endl;
    }

   


    return 0;
}