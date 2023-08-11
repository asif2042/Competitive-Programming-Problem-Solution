#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n, m;
    cin >> n >> m;
    map<string, int > map;
    string s;
    int sal;
    for(int i = 0 ;  i < n ; ++i)
    {
        cin >> s >> sal;
        map[s] = sal;
    }
    while(m--)
    {
        int tot = 0;
        while(cin >> s && s != ".")
        {
            tot += map[s];

        }
        cout << tot << endl;

    }


    return 0;
}