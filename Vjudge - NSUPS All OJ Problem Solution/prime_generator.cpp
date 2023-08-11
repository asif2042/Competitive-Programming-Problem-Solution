#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
int  isprime(long long int n)
{
    if(n < 2)
    return 0;
   if(n == 2 || n == 3)
   return 1;
   if(n % 2 == 0 || n % 3 == 0)
   return 0;
   for(int i = 5; i*i < n; i +=6)
   {
    if(n % i == 0 || n % ( i + 2) == 0)
    return 0;

   } 
   return 1;
}

int main(void)
{
    optimize();


    int t;
    cin >>t ;
    
    while(t--)
    {
        int flag = 0;
       long long  int m , n;
        cin >> m >> n;
      
        for(int i = m; i <= n; ++i)
        {
           if(isprime(i))
           {
           cout << i << endl;
           flag = 1;
           }
        }
        if(flag)
        cout << endl;

    }


    return 0;
}