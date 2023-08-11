#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main(void)
{
   optimize();

   vector< vector<int > > v;

   int n;
   cin >> n;
   while(n--)
   {

    int h, m ,s;
    cin >> h  >> m >> s;
    vector< int > tmp;
    tmp.push_back(h);
    tmp.push_back(m);
    tmp.push_back(s);
    v.push_back(tmp);

   }

   sort(v.begin(), v.end());
   for(int i = 0; i < v.size(); ++i)
   {

       for(int j = 0; j < 3; ++j)
        cout << v[i][j] << ' ';
       cout << endl;
   }
    return 0;
}
