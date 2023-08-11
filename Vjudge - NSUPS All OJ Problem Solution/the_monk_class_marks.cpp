#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n;
    cin >> n;
    map<int, multiset<string>> list;

    string name;
    int marks;
    for(int i = 0; i< n; ++i )
    {
        cin >> name >> marks;
        list[marks].insert(name);
    }

    auto it = --list.end();

   while(1)
    {

        auto &nm  = (*it).second;
        int mk = (*it).first;
        for(auto u: nm)
        cout << u << " " << mk << endl;
        if(it == list.begin())
        break;
        --it;

    }
    return 0;
}