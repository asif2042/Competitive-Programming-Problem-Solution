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
        int n, m;
        cin >> n >> m;
        multiset<int> s1;
        multiset<int> s2;
        for(int i = 0; i < n;++i)
        {
            int tmp;
            cin >> tmp;
            s1.insert(tmp);
        
        }
         for(int i = 0; i < m;++i)
        {
            int tmp;
            cin >> tmp;
            s2.insert(tmp);
            
        }
        int cnt = 0;
        for(auto  i = s1.begin(); i != s1.end(); ++i)
        {

            
            if(s2.find(*i) != s2.end())
            {
            cnt += 2;
            s2.erase(s2.find(*i));
          
            }
                
                

              
            

        }
        

        cout << (n + m - cnt) << endl;
    }


    return 0;
}