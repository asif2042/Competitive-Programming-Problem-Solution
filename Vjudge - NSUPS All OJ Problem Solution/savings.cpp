#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;
    unsigned int s = 0;
    cin >> n;
    int i ;
    for( i = 1; s < n; ++i)
     s += i;

    


    cout << i - 1 << endl;


    return 0;
}