#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int a, b, x;
    cin >> a>> b >> x;
    if((a+b) >= x  && a  <= x)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;


    return 0;
}