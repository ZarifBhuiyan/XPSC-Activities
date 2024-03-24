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
        sort(a, a+n);
        int x = a[0];
        int cnt = 0;
        for(int i = 1; i < n; i++)
        {
            if(x == a[i])
            {
                cnt++;
            }
            else
            {
                x = a[i];
            }



        }
        if(cnt % 2 == 0)
            cout << n - cnt << endl;
        else
            cout << n - cnt - 1 << endl;


    }



}
