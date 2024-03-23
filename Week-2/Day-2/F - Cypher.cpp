#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            while(x--)
            {
                char c;
                cin >> c;
                if(c == 'D')
                {
                    a[i]++;
                }
                else
                {
                    a[i]--;
                }

            }

        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] > 9)
                cout << a[i] - 10 << " ";

            else if(a[i] < 0)
                cout << a[i] + 10 << " ";
            else
                    cout << a[i] << " ";
        }
        cout << endl;


    }




}

