#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;
    cin >> n;
    map<int , int> m;
    int cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        int num = 0;
        cin  >> num;
        ++m[num];
       

    }
    for(auto u: m)
    {

        if(cnt < u.second )
        cnt = u.second ;
       
    }
    cout << cnt  << endl;

   




    return 0;
}