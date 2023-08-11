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
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i< n; ++i)
        {
            int num ;
            cin >> num;
            v.push_back(num);
        }
        int flag = 1;
        sort(v.begin(), v.end());
        for(int i = 1 ; i < n; ++i)
        {
            if(v[i] - v[i -1] > 1)
           flag = 0;
        }
        if(flag)
         cout << "YES" << endl;
            else
            cout << "NO" << endl;
       

       



        

    }
    return 0;
}
