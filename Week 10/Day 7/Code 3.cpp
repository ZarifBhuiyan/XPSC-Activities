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

int find_x(int *a, int n)
{

    for(int x = 0; x < 256; x++)
    {
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans = ans ^ (a[i] ^ x);
        }
        if(ans == 0)
            return x;
    }
    return - 1;
}

int main()
{
    start

    test
    {
        int n;
        cin >> n;
        int a[n];
        For(i, 0, n)
        {
            cin >> a[i];
        }
        int ans = find_x(a, n);

        cout << ans << nl;


    }



}
