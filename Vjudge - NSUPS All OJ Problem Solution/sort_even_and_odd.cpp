#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main(void)
{
   optimize();

   int n;
   cin >>n;
    vector<int> o;
    vector<int> e;
   while(n--)
   {


    int tmp;
    cin >> tmp;
    if(tmp % 2 == 0)
        e.push_back(tmp);
    else
        o.push_back(tmp);




   }
    sort(o.begin(), o.end());
    sort(e.begin(), e.end());
    reverse(e.begin(), e.end());
    for(int i = 0 ; i < o.size(); ++i)
    cout << o[i] << ' ';
    for(int i = 0 ; i < e.size(); ++i)
        cout << e[i] << ' ';
        cout << endl;


    return 0;
}
