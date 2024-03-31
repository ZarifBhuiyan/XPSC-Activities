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
        int x = n - 1;
        vector<int> a[n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < x; j++)
            {
                int val;
                cin >> val;
                a[i].push_back(val);
            }
        }

        int f;

        if(n == 3)
        {
            for(int i = 0; i < n - 1; i++)
            {
                for(int j = i + 1; j < n ; j++)
                {
                    if(a[i][0] == a[j][0])
                    {
                        f = a[i][0];

                        break;
                    }
                }

            }


        }
        else
        {
            for(int i = 0; i < n - 1; i++)
            {
                if(a[i][0] == a[i+1][0])
                {
                    f = a[i][0];
                    break;
                }

            }
        }



        for(int i = 0; i < n ; i++)
        {
            if(a[i][0] != f)
            {
                a[i].insert(a[i].begin(), f);
                f = i;
                break;

            }
        }



        for(int i = 0; i < n ; i++)
        {
            cout << a[f][i] << " ";
        }
        cout << endl;




    }
}
