#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    string s1, s2;
    cin >> s1;
    cin >> s2;

    for(int i = 0; i< max(s1.size(), s2.size()); ++i)
     {
        if(i < s1.size())
        cout << s1[i];
        if(i < s2.size())
        cout <<s2[i];
     }
     cout << endl;

    return 0;
}