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
        string x = "Timru";
        string s;
        cin >> s;
        if(n == 5)
        {
            sort(s.begin(), s.end());
            if(s == x)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }
        else
            cout << "NO" << endl;




    }






}
