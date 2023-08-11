#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int l, b;
    cin >> l >> b;
    for(int i = 1; 1 ; ++i)
    {
        l = l * 3;
        b = b * 2;
        if(l  > b)
        {
            cout << i << endl;
            return 0;
        }
    }


    return 0;
}