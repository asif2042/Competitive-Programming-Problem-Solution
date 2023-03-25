
// erro code
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
// do code

int main(void)
{
    optimize();


    int t;
    cin >> t;
    for(int T = 1; T <= t ; ++T)
    {
        long long int n, num , temp;
        int cnt1 = 0, cnt2 = 0;
        cin >> n;
        num = n;
        while (n != 0)
        {
            
            if(n % 2 == 1)
            cnt1++;
            n = n >> 1;
        }

        int flag = 1;
        while(flag)
        {
            temp = ++num;
            while(temp != 0)
            {
               
               if(temp % 2 == 1)
                cnt2++;

                temp = temp >> 1;
                
            }
            if(cnt1 == cnt2)
            flag = 0;
            cnt2 = 0;
        }
        cout << "Case "<< T << ": " << num << endl;

    }


    return 0;
}
//Problem : TLE
// lets optimize our code

/*

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin >> t;
    for(int T = 1; T <= t ; ++T)
    {
        long long int n, num , temp, number ;
        int cnt1 = 0, cnt2 = 0;
        cin >> n;
        num = n;
        while (n != 0)
        {
            
            if(n % 2 == 1)
            cnt1++;
            n = n >> 1;
        }

        int flag = 1;
        int d = 1;


        while(flag)
        {

            if(flag == 1)
            {
            temp = ++num;
            flag = 2;
            }
            else
            {

                temp =  2 * num - d ;
                d++;
                flag = 1;

            }
            number = temp;

            while(temp != 0)
            {
               
               if(temp % 2 == 1)
                cnt2++;

                temp = temp >> 1;
                
            }
            if(cnt1 == cnt2)
            {
            flag = 0;
            }
            cnt2 = 0;
        }
        cout << "Case "<< T << ": " << number << endl;

    }


    return 0;
}
O(N)
so we need O(long(n))
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t ;
    cin >> t;
    for(int T = 1; T <= t; ++T)
    {
        vector<bool> s;
        
        int n;
        cin >> n;
        while(n != 0)
        {
            int digit = n % 2;
            s.push_back(digit);
            
            
            n = n >> 1;
            //cout << digit << " ";
        }
         s.push_back(0);
for(auto u : s)
         cout << u;
         cout << endl;
        
    

        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == 1 && s[i+1] == 0)
            {
                int tmp = s[i];
                s[i] = s[i+1];
                s[i+1] = tmp;
                break;
                
            }
            
        

        }
         for(auto u : s)
         cout << u;
         cout << endl;

        reverse(s.begin(), s.end());
        if(s[0] == 0)
        s.erase(s.begin());
         n = 0;
         
         for(auto u : s)
         cout << u;
        int pstn= 0;
        for(int i = s.size() -1; i >= 0; --i )
        {
            
            n += (s[i]) * pow(2, pstn);
            
            ++pstn;
        }
        cout <<"Case "<< T<< ": " <<n  << endl;

        

    }

   


    return 0;
}*/