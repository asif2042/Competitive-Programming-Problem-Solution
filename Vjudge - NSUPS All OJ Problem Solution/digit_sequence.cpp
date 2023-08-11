#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();

    
    
    int k ;
    cin >> k;
    string s;

    for(int i = 1; i<= k; ++i)
    {
    

        string str;
        int n = i;
        while(n)
        {
            int tmp = n % 10;
            str += to_string(tmp);
            n = n / 10;
            

            

        }
        reverse(str.begin(), str.end());
        s += str;
    
    }
    cout << s[k - 1] << endl;



    
    


    return 0;
}