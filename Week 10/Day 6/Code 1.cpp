#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define For(i, x, y)     for(int i = x; i < y; i++)
#define FFor(i, x, y)    for(int i = x; i <= y; i++)
#define RFor(i, x, y)    for(int i = y; i >= x; i--)
#define ll               long long
#define pb               push_back
#define gcd(a,b)         __gcd(a, b)
#define lcm(a,b)         (a * b) / gcd(a, b)
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
        int a[n];
        vector<int> even;
        vector<int> odd;
        For(i, 0, n)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        For(i, 0, n)
        {
            cout << a[i] << " ";
        }

        cout << nl;

    }


}
