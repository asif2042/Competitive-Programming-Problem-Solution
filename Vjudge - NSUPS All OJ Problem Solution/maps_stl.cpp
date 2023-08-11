#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


     int t;
     cin >> t;
     map<string,int > m;
     while(t--)
     {
        int a, b;
        string s;
        cin>> a >> s;
        if(a == 1)
        {
            cin >> b;
         m[s] += b;
        }
        else if(a == 2)
        {
           
        m[s] = 0;
        }
        else if(a == 3)
        { 
            cout << m[s] << endl;
           
        }

     }


    return 0;
}