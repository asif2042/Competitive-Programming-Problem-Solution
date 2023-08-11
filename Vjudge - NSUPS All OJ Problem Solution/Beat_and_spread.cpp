#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(void)
{
    optimize();
    
    int n = 0;
    cin >> n;
    while(n--)
    {
        int a , b;
        cin >> a >> b;
        int x = 0, y = 0;
        x = (a + b) / 2;
        y  = (a - b) / 2;
        if( ( x + y ) == a && (x - y) == b && (x*y) >= 0)
        cout << x <<" " << y <<endl;
        else 
        cout << "impossible" << endl;
    }
    return 0;
}