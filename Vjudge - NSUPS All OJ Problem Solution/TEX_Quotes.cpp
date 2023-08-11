#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();



    char ch;
    int count = 0;
    while(scanf("%c",&ch) == 1){
        if(ch == '"'){
            count++;
            if(count%2)cout <<"``";
            else cout <<"''";
        }
        else cout << ch;
    }
    return 0;
    


}