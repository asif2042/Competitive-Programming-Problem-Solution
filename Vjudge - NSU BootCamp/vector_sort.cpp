#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        v.push_back(num);

    }
    sort(v.begin(), v.end());
    for(auto u: v)
    cout << u << ' ';
    cout<< endl;


    return 0;
}