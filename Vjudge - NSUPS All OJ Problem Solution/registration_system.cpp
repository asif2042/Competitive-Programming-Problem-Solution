#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;
    cin >> n;
    map <string ,int > m;
    string s;
    for(int i = 0; i  < n; ++i)
    {
        cin >> s;
        ++m[s];
        if(m[s] > 1)
        cout << s << m[s] -1  << endl;
        else
        cout  << "OK" << endl;
  
    }



    return 0;
}