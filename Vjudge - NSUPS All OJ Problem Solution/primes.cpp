// unsolved. There is still tle issue
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
const int N = 1e7 +10;
int arr[N];


int main(void)
{
    optimize();

    for(int i = 2; i < N; ++i)
    {

        arr[i] = 1;
        
       
        if( i % 2 == 0 || i % 3 == 0)
        arr[i] = 0;
        if(i == 3 || i == 2)
        arr[i] = 1;
        for(int j = 5; j * j <= i; j += 6)
        {
            if(i % j == 0  ||  i % (j + 2) == 0)
            arr[i] = 0;
        }

    }


    int n;
    cin  >> n;
 
    for(int i = 2; i < n; ++i)
    {
        if(arr[i] == 1)
        {
            if(arr[n - i] == 1)
            {
               cout << i << " " << n - i << endl;
               return 0;
            
            }
        }
    }
    cout << -1 << endl;



    return 0;
}