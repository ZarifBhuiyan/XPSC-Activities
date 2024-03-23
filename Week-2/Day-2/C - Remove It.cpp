#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x;
    cin >> n >> x;
    long long int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] != x)
            cout << a[i] << " ";
    }


}

