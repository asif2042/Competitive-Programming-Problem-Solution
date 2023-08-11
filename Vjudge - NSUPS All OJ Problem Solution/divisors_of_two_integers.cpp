#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{

    /*
    Coder: Asif Miah
    Studied CSE at North South University 
    handle name: asif2042 (in all oj)
    */
    optimize();


    int n;
    cin >> n;
    multiset <int> s;
    for(int i = 1; i <= n; ++i){
        int num;
        cin >> num;
        s.insert(num);
    }
     
  
     int m = *(--s.end());
 
     vector<int> v;
     for(int i = 1; i * i <= m; ++i)

     {
        if(m % i == 0)
        {
        v.push_back(i);

        if(i != m /i)
        v.push_back(m / i);
        
        }

        
     }
     
 
     
     for(auto u : v)
     {
        s.erase(s.find(u));
     }
    

   
    
     cout << m << ' ' << *(--s.end());




    return 0;
}