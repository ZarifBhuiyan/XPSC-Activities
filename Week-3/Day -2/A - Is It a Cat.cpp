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
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        //cout << s << endl;
        string x = "meow";

        if(n < 4)
            cout << "NO" << endl;
        else
        {
            int ans = 1, j = 0, cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(s[i] != x[j])
                {
                    ans = 0;
                    break;
                }
                if(s[i+1] != s[i])
                {
                    cnt++;
                    j++;
                }
            }

            if(ans == 1 && cnt == 4)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }








    }
}
