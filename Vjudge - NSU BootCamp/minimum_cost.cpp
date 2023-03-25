#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int n, a, x;
    cin >> n >> a >> x;
    int arr[a];
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < a ; ++i)
    {
    cin >> arr[i];
    if(arr[i] < x)
    cnt1++;
    if(arr[i] > x)
    cnt2++;

    


    }
    cout << min(cnt1 , cnt2) << endl;








    return 0;
}