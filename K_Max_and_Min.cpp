#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int mn;
    int mx;
    mn = min(a, b);
    mn = min(mn, c);
    mx = max(a, b);
    mx = max(mx, c);

    cout << mn << " " << mx;

    return 0;
}