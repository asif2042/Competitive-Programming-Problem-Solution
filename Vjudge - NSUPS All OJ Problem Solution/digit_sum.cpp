#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;
    cin >> n;
    int tmp = n;
    int sum = 0;
    while(tmp)
    {
        sum = sum +  tmp % 10;
        tmp =  tmp / 10;

    }
    if(n % sum == 0)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;



    return 0;
}