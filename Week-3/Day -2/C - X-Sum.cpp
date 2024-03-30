#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        long long int a[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];

            }
        }

        long long int ans = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int x, y;

                x = i - 1;
                y = j + 1;

                long long int sum = a[i][j];

                while(x >= 0 && y < m)
                {
                    sum = sum + a[x][y];
                    x--;
                    y++;
                }

                x = i + 1;
                y = j - 1;

                while(x < n && y >= 0)
                {
                    sum = sum + a[x][y];
                    x++;
                    y--;
                }

                x = i - 1;
                y = j - 1;

                while(x >= 0 && y >= 0)
                {
                    sum = sum + a[x][y];
                    x--;
                    y--;
                }

                x = i + 1;
                y = j + 1;

                while(x < n && y < m)
                {
                    sum = sum + a[x][y];
                    x++;
                    y++;
                }

                ans = max(ans, sum);


            }
        }

        cout << ans << endl;




    }
}
