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

        int a, b, c;
        cin >> a>> b >> c;
        if(a+ b == c)
        cout << '+' << endl;
        else
        cout << '-' << endl;

    }


    return 0;
}