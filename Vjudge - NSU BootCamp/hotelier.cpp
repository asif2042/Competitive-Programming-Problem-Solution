#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
 int room[10];

int main(void)
{
    optimize();

    char s;
 
    int  n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> s;
        
        
            if(s == 'L')
            {
                for(int j = 0; j < 10; ++j)
                {
                    if(room[j] == 0)
                    {
                        room[j] = 1;
                        break;
                    }
                }

            }
            else if(s == 'R')
            {
                for(int j = 9; j >= 0; --j)
                {
                    if(room[j] == 0)
                    {
                        room[j] = 1;
                        break;
                    }
                }

            }

            else
            {
            
                int num = s - '0';
                room[num] = 0;
            }

        
    }
    for(auto u : room)
    cout << u;
    cout << endl;



    


    return 0;
}