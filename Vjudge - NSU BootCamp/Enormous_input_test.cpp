#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n, k;

    cin >> n >> k ;
    int cnt = 0;
    while(n--)
    {

        
        int i ; 
        cin >> i;
        if(i % k == 0)
        cnt++;



    }
cout<< cnt << endl;



    return 0;
}