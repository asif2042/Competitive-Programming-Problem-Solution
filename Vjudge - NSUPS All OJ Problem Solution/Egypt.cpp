#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


   while(1)
   {
    vector<int> v;
    int n;
    for(int i = 0; i < 3; ++i)
    {
        cin>> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

   if(v[0] == 0 && v[1] == 0 && v[2] == 0)
   
     return 0;

    
    else if((v[0]*v[0] + v[1]*v[1]) == v[2]*v[2])
    cout << "right" << endl;
    else
    cout << "wrong" <<endl;

    v.erase(v.begin(), v.end());



   }

    return 0;
}