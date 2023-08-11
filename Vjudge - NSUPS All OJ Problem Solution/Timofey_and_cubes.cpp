#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;
    long long int a[100000 *2 + 10];
    cin >> n;
    int num;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for(int i = 0; i < (n /2); i= i + 2)
    {
        num = a[i];
        a[i] = a[n -1 - i];
        a[n -1- i] = num;
    }

   for(int i = 0; i < n; ++i)
    cout<< a[i] <<' ';
    cout << endl;




    return 0;
}