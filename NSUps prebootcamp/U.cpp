#include<iostream>
using namespace std;
int main(void)
{
    int a = 0, b = 0, k = 0, temp = 0;
    cin>>a>>b;
    temp = abs(a - b);
    if(temp % 2 != 0)
    cout<<"IMPOSSIBLE"<<endl;
    else{
        temp = temp /2;
        if(a < b)
        cout<<a + temp <<endl;
        else
        cout<<b+ temp<<endl;
    }
return  0;

    
}