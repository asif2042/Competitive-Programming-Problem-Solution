#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


     int t;
     cin >> t;
     set<int > s;
     while(t--)
     {
        int a, b;
        cin >> a >> b;
        if(a == 1)
        s.insert(b);
        else if(a == 2)
        {
            if(s.find(b) != s.end())
             s.erase(s.find(b));
        }
        else if(a == 3)
        {
            if(s.find(b) != s.end())
            cout <<"Yes"<< endl;
            else
            cout << "No"<< endl;
        }

     }


    return 0;
}