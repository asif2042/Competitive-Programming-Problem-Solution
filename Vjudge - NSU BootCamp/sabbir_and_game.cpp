#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
const int N  = 1e7 + 10;
long long int a[N];

int main(void)
{
    optimize();


    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       long long int p = 0;
       
       a[0]= 0;

       for(int i = 1; i <= n; ++i)
       {
        cin >> a[i];
        a[i] += a[i-1];
   
        
        
        
        
        
            
            if(a[i] < 1)
            {

                p = p + (1 - a[i]);
                a[i] = a[i] + (1 - a[i]);
                
            
            }
    
       }
      cout<< p<<endl;


    }


    return 0;
}