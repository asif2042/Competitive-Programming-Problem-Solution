#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(void)
{
    optimize();


    set<int> s;
    int q = 0;
     cin>> q;
     while(q--)
     {
        int typ = 0, x = 0;
        cin >> typ >> x;
        if(typ == 1)
        s.insert(x);
        else if(typ == 2)
        s.erase(x);
        else if(typ == 3)
        {
            if(s.count(x))
            cout<< "Yes"<<endl;
            else
            cout<<"no"<< endl;
        }
     }



    return 0;
}