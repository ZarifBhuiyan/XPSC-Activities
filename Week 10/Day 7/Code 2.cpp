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

     int n;
     cin >> n;
     int ans;
     if(n % 2 == 0)
     {
         ans = n / 2;
         cout << ans << nl;
         FFor(i, 1, ans)
         {
             cout << 2 << " ";
         }
         cout << nl;
     }
     else
     {
         ans = n / 2 - 1;
         cout << ans + 1 << nl;
         FFor(i, 1, ans)
         {
             cout << 2 << " ";
         }

         cout << 3 << nl;
     }


}
