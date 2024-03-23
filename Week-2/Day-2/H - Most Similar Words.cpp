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
        vector<string> v;
        for(int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int mn = INT_MAX;
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n;j++)
            {
                string x = v[i];
                string y = v[j];
                int sum = 0;
                for(int k = 0; k < m;k++)
                {
                    sum = sum + abs( x[k] - y[k]);
                }
                if(sum < mn)
                    mn = sum;


            }

        }



        cout << mn << endl;



    }






}

