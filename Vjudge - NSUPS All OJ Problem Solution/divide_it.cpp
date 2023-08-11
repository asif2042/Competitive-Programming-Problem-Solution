#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    long long int  n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        int ans = 0;
        while(n > 1){
            if(n % 2 == 0){
                n/=2;
                ans++;
            }
            else if(n % 3 == 0){
                n = (2*n)/3;
                ans++;
            }
            else if(n % 5 == 0){
                n = (4*n)/5;
                ans++;
            }
            else if(  (n % 2 != 0 && n % 3 != 0) && (n % 5 != 0) ){
                if(n != 1){
                    cout<<"-1\n";
                    break;
                }
            }
            if(n == 1){
                cout<<ans<<endl;
                break;
            }
        }
    }



    return 0;
}