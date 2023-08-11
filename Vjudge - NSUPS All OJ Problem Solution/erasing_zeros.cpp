#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int flag = -1;
        int cnt = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '1')
            {
                if(flag != -1)
                cnt += (i - flag - 1);
                flag = i;
            }
            
        }
        cout << cnt << endl;
    }


    return 0;
}