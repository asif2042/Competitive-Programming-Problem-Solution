#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); //cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin >> t;
    while(t--)
    {
        vector<string> v;

        char c;
        string s, str;
        cin >> c;
        getline(cin , s);
        s = c + s;
        string tmp;
        int flag = 0;
        for(auto u : s)
        {

            if(flag)
            str += u;
            else if(isspace(u))
            {
                flag = 1;

            }
            else
            tmp += u;

        }
        cout << s << endl << tmp << endl << str << endl;
        if(tmp == "back")
        {
            cout << v.back()<< endl;
            v.pop_back();
        }
        else if(tmp == "front")
        {
            cout << v.front()<< endl;
            v.erase(v.begin());
        
        }
        else if(tmp == "reverse")
        {
            reverse(v.begin(), v.end());
        }
        else if(tmp == "push_back")
        {
            v.push_back(str);
        }
        else if(tmp == "toFront")
        {
            v.insert(v.begin(), str);
        }



    }


    return 0;
}