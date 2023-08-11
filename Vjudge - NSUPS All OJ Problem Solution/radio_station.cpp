#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n , m;
    cin >> n >> m;
   map<string , string> map;
    string s1,s2;

    for(int i = 0; i < n; ++i)
    { 
        cin >> s1>> s2;
        s2 += ';';
        map[s2] = s1;
    }

    
    for(int i = 0; i < m; ++i)
    { 
        cin >> s1>> s2;
        cout << s1 << " " << s2 << " #" << map[s2]<< endl;
       
        
    }





    return 0;
}