#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


const int N = 1e7 + 10;
bool v[N + 10];
void sieve(void)
{

    for(int i = 0 ;i < N ; ++i)
    v[i] = true;

    v[0] = v[1] = false;

    for(int i = 4; i <= N; i +=2)
    v[i] = false;
    for(int i = 3; i * i <= N; i += 2)
    {
        if(v[i])
        {
        for(int j = i * 2; j < N; j += i )
        v[j] = false;
        }
    }
    
}



int main(void)
{
    optimize();

   sieve();
    int n;
    cin >> n;
    long long num; 
    while(n--)
    {
        cin >> num;
       long long tmp = sqrt(num);
        if(tmp * tmp == num &&  v[tmp])
        cout << "YES" << endl;
        else
        cout << "NO" << endl;

        
        

    }

   


    return 0;
}