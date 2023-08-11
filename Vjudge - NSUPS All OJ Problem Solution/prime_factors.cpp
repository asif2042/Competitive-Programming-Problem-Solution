#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'



const int N = 1e7 + 10;
bool v[N + 10];
vector<int > arr;
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

    for(auto u : v)
    {
        if(u)
        arr.push_back(u);
    }
    
}



int main(void)
{
    optimize();
    sieve();


     int number,i,temp;
     while( cin >> number && number)
     {
       if(number<0)
       {
         printf("%d = -1 x ",number);
         number=number*-1;
       }
       else
       {
         printf("%d = ",number);
       }
       for(i=0;arr[i]*arr[i]<=number;i++)
       {
         if(number% arr[i]==0)
         {
            printf("%d x ",arr[i]);
            number=number/ arr[i];
            temp= arr[i];
            arr[i]=1;
         }
       }
       printf("%d\n",number);
     }
      
    


    return 0;
}