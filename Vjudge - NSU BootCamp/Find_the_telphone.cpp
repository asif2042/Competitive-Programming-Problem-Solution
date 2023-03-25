#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

char trn(char ch)
{
  
  if(ch >= 'A' && ch <= 'C')
  ch = '2';
  else if(ch >= 'D' && ch <= 'F')
  ch = '3';
  else if(ch <= 'I' && ch >= 'G')
  ch = '4';
  else if(ch <= 'L' && ch >= 'J')
  ch = '5';
  else if(ch >= 'M' && ch <= 'O')
  ch = '6';
  else if(ch >= 'P'  && ch <= 'S' )
  ch = '7';
  else if(ch >= 'T' && ch <= 'V')
  ch = '8';
  else if(ch >= 'W' && ch <= 'Z')
  ch = '9';

  return ch;
}
int main(void)
{
    optimize();
     

     string s;

    while(getline(cin, s))
    { 
        //,static_cast<char>(EOF) 
      
      for(auto u: s)
      cout<< trn(u);
      cout <<endl;


    }


    return 0;
}