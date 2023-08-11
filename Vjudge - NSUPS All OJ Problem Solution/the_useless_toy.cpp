


#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    char first, last;
    cin >> first >> last;
    int n;
    cin >> n;

    switch(first)
    {
        case 94:
        first = 1;
        break;
        case 62:
        first = 2;
        break;
        case 118:
        first = 3;
        break;
        case 60:
        first = 4;
        break;
    }

    switch(last)
    {
        case 94:
        last = 1;
        break;
        case 62:
        last = 2;
        break;
        case 118:
        last = 3;
        break;
        case 60:
        last = 4;
        break;
    }   
    n = n % 4;

    if((( first + n) == last || (first + n) % 4 == last )  && !((first + 4 -n) == last || (first - n)  == last))
    {
        cout << "cw"<< endl;
    }
     else if(!(( first + n) == last || (first + n) % 4 == last )  && ((first + 4 -n) == last || (first - n)  == last))
    {
        cout << "ccw" << endl;
    }
    else
    cout<< "undefined" << endl;
    return 0;
}