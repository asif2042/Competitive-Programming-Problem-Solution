#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main(void)
{
    optimize();


    int t ;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        vector<int > v;
        for(auto u : s)
        {
            if(u == '1')
            {
                ++cnt;
               
            }
            else
            {
                if(cnt > 0)
                {
                    v.push_back(cnt);
                    cnt = 0;
                }
            }
        }
        v.push_back(cnt);

        sort(v.begin(), v.end(), greater<int>());
        int alice = 0;
        for(int i = 0; i < v.size(); i += 2)
            alice += v[i];
         
         cout << alice << endl; 

    }
    return 0;
}
