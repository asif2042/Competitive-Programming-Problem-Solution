#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'


int main(void)
{
    optimize();

    int t;
    cin >> t;
    for(int T = 1; T <= t; ++T)
    {
        cout  << "Case " << T << ":"<< endl;

    

    int n , m;
    cin >> n >> m;
    deque<int> q;
    while(m--)
    {
        string s;
        int num;
        cin >> s;

      
        if(s == "pushLeft" || s == "pushRight")
        {
            cin >>num;
            if(q.size() == n)
            cout<< "The queue is full"<< endl;
            else if(s == "pushLeft")
            {
                cout << "Pushed in left: " << num<< endl;
            q.push_front(num);
            }
            else
            {
                cout << "Pushed in right: "<< num << endl;
            q.push_back(num);
            }

        }
        else
        {
            if(q.empty())
            cout << "The queue is empty" << endl;

            else if(s == "popLeft")
            {
                cout << "Popped from left: " << q.front() << endl;
            q.pop_front();
            }

            else
            {
                cout << "Popped from right: " << q.back() << endl;
            q.pop_back();
            }


        }


        

    }
    }


    return 0;
}