#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    string a,b,c;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << a.size()<< " " << b.size()<< endl;
    cout << c<< endl;
    char ch;
    ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    cout << a << " "<< b << endl;



    return 0;
}