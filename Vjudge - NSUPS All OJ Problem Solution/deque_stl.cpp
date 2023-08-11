#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin >>t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;

        vector<int> v ;
        multiset<int> s;

        for(int i = 0, x = 0; i < n; ++i)
        {
            int tmp ;
            cin >> tmp;
            v.push_back(tmp);
            s.insert(tmp);
            if(i + 1 >= k)
            {
                cout << *(--s.end()) <<" ";
                s.erase(s.find(v[x++]));
            }
        }
        cout << endl;
    }

    return 0;
}