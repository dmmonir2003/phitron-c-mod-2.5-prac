#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < m; i++)
    {
        if (i < n)
        {
            b[i] = a[i];
        }
        // else
        // {
        //     cin >> b[i];
        // }
    }
    for (int i = n; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    cout << "hello";

    return 0;
}