#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

vector<long long int>  div(long long int n)
{
    vector< long long int> v;
    for(int i = 2; i * i <= n; ++i)
    { 
        if(n % i == 0)
        {
          v.push_back(i);
          if(n/i != i)
          v.push_back(n /i);
        }
    }
   return v;
}


int main(void)
{
    optimize();


    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<long long int> arr;

        for(int i = 0; i< n; ++i)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        if(arr.size() == 1)
        {
            if(arr[0] == 2)
            cout << 4 << endl;
            else if(arr[0] == 3)
            cout << 9 << endl;
            else
            cout << -1 << endl;
            continue;

        }
         sort(arr.begin(),  arr.end());
         long long int number = arr[0] * arr[n - 1];
        

      
        
        vector<long long int> v = div(number);
        if(v.size() == arr.size())
        {
        sort(v.begin(), v.end());
        if(v == arr)
        cout << number << endl;
        else 
        cout << -1 << endl;
        }
        else
          cout << -1 << endl;
        


       

    } 
    return 0;
}