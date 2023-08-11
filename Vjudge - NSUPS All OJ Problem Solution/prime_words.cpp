#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);// cin.tie(0); cout.tie(0);
#define endl '\n'


int GetCount(string word)
{
    int count = 0;
    for (int i = 0; i < word.size(); ++i)
        if (word[i] > 'Z')
            count += word[i] - '`';
        else
            count += word[i] - 'A' + 27;
    return count;
}
 
 
bool IsPrime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
 
    return true;
}
int main(void)
{
    optimize();
 
 
    string s;
    char c;
    cin >> c;
    while(getline(cin, s))
    {
        s = c + s;
       long long  int num = 0;
        /*
       for(auto u : s)
       {
 
        if(isupper(u))
        num = num   + u - 'A' + 27;
 
        else
         num = num   + u - 'a' + 1;
 
 
 
       }*/

        num = GetCount(s);

       if(IsPrime(num))
       cout << "It is a prime word." << endl;
       else
       cout << "It is not a prime word."<< endl;
 
 
   cin >> c;
 
    }
 
 
    return 0;
}