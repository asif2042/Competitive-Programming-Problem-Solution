
// error code. it won't be successfully submitted
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

char ck(char * ch, char u, char l)
{
  int flag = 1;
  *ch = 'A';
  while(flag)
  {
 
    if(*ch != u && *ch != l)
    flag = 0;
 
    else 
    *ch = *ch + 1;
  }
 
 
 
 
}

char  s1[50000 + 10], s2[50000 + 10];
int main()
{
    optimize();


    int n ;
    cin >> n;
   
    
   
     for(int i = 1; i <= 2*n; ++i)
    {
     cin >> s1[i];
     s2[i] = ck(&s2[i], s1[i], s2[i - 1] );
     cout<<s2[i]; 
    }
    
   

    return 0;
}