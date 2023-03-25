/*
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    while(s1.size() !=0 || s2.size() != 0)
    {
        if(s1 == s2) // complexicity of strings comparison is O(N)
        {
            cout << cnt <<endl;
            return 0;
        }
        
        else if(s1.size() > s2.size())
        s1.erase(s1.begin());
        else
        s2.erase(s2.begin());

        ++cnt;
    }
    cout << cnt << endl;


    return 0;
}
// complexicity = 10^5 *10^5
*/

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();

    
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = s1.size() + s2.size();
    int mn = min(s1.size(), s2.size());

    for(int i = 1; i <= mn; ++i)
    {

        if(s1[s1.size() - i] != s2[s2.size() - i])
        {
            break;

        }
        cnt -= 2;

    }
    cout << cnt << endl;


    


    return 0;
}
// now complexicity = 10^5