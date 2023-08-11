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
        vector<pair<char , char>> v;
        int n;
        cin >> n;
        string s;

        cin >> s;

        for(int i = 0; i< s.size()-1;  ++i)
        {
            
           
            v.push_back({s[i], s[i + 1]});
        }

       sort(v.begin(), v.end());
       int sz = unique(v.begin(), v.end()) - v.begin();
       cout << sz << endl;
    } 


    return 0;
}