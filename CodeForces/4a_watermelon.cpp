#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(void)
{
    optimize();


    int w =0;
    cin>>w;
    if(w % 2 == 0 && w != 2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


    return 0;
}