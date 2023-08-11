

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n, p, q;
    cin >> n ;
    cin >> p;
    vector<int> v;
    for(int i = 0; i < p; ++i)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> q;
    for(int i = 0; i < q; ++i)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();
    int flag = 0;
     if(n == sz)
     cout<< "I become the guy." << endl;

     else
     cout << "Oh, my keyboard!" << endl;


    return 0;
}