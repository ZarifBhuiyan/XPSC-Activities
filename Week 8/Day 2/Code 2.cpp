 #include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define For(i, x, y)     for(int i = x; i < y; i++)
#define FFor(i, x, y)    for(int i = x; i <= y; i++)
#define ll               long long
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'

using namespace std;
int main()
{
    start

    test
    {
        int n;
        cin >> n;
        if(n % 2 == 0)
        {
            FFor(i, 1, n)
            {
                cout << 2 * i << " ";
            }
            cout << nl;
        }
        else
        {
            FFor(i, 1, n)
            {
                cout << i << " ";
            }
            cout << nl;
        }



    }






































}
