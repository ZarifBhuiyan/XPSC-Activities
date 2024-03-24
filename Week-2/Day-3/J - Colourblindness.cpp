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
        string s1, s2;
        cin >> s1 >> s2;

        for(int j = 0; j < n; j++)
        {
            if(s1[j] == 'G' || s1[j] == 'B')
                s1[j] = 'X';

            if(s2[j] == 'G' || s2[j] == 'B')
                s2[j] = 'X';
        }

        if(s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }



}

