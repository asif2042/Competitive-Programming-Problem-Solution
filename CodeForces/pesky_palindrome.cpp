#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
bool ispalindrome(string s)
{
    string tmp;
    reverse(s.begin(), s.end());
    return tmp == s;

}

int main(void)
{
    optimize();


    string s;
    while(cin >> s)
    {
        int cnt = 0;
        map < string , int > m;
        for(int i = 0; i < s.size(); ++i)
        {
            for(int j = i; j< s.size(); ++j)
            {
                string str = s.substr(i, j - i + 1);
                if(!m.count(str) && ispalindrome(str))
                {
                    ++cnt;
                    ++m[str];
                }


            }
        }

        cout << "The string '" << s <<"' contains "<<cnt << " palindromes."<< endl;

    }


    return 0;
}