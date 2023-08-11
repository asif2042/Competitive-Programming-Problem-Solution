#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();


    int t;
    cin >> t;
    for(int tc = 1; tc <= t; ++tc)
    {

        int n, m;
        cin >> n >> m;
       vector < int > arr;
        for(int  i = 0 ; i < n; ++i)
        {
            int temp ;
            cin >> temp;
            arr.push_back(temp);
        }
        char c;
        for(int i = 0; i < m; ++i)
        {
            cin >> c;

            if(c == 'S')
            {
                int tmp;
                cin >> tmp;
                for(int j = 0 ; j < n; ++j)
                {
                    arr[j] += tmp;
                }
            }

            else if(c == 'M')
            {
                int tmp;
                cin >> tmp;
                for(int j = 0 ; j < n; ++j)
                {
                    arr[j] *= tmp;
                }
            }

            else if(c == 'D')
            {
                int tmp;
                cin >> tmp;
                for(int j = 0 ; j < n; ++j)
                {
                    arr[j] = arr[j] / tmp;
                }
            }

             if(c == 'P')
            {
                int y, z;
                cin >> y >> z;
               int tmp = arr[y];
               arr[y] = arr[z];
               arr[z] = tmp;
            }

             if(c == 'R')
            {
                reverse(arr.begin(), arr.end());
            }
        }

        cout << "Case "<< tc <<":"<< endl;
        for(auto u : arr)
        cout << u << ' ';
        cout << endl;



    }


    return 0;
}