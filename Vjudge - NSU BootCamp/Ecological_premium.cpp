#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


   int n = 0;
   cin >> n;
   while(n--)
   {
    int f = 0;
    cin >> f;
    int sum = 0;
    int arr[f][3];
    for(int i = 0; i < f; ++i)
    {
        for(int j = 0; j < 3; ++j )
        {
        cin >> arr[i][j]; 
        
        

        }

        sum += arr[i][0]*arr[i][2];


    }
    cout << sum << endl;


   }


    return 0;
}