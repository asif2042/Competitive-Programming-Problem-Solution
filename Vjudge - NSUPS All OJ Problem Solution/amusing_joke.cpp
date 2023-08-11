#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    map<char,int> m1, m2;
    string s1, s2 , s3;
    cin >> s1;
    cin >> s2;
    s1 += s2;
    cin >> s3;

    for(auto u: s1)
    {
        m1[u]++;
    }
    for(auto u: s3)
    {
        m2[u]++;
    }

    for(int i = 'A'; i <= 'Z'; ++i)
    {
        if(m1[i] != m2[i])
        {
            cout << "NO" << endl;
            return 0;
        
        }
    }
    cout << "YES" << endl;





    return 0;
}