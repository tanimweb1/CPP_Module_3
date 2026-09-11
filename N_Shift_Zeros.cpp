#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
    }

    int c[n], j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            c[j] = a[i];
            j++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        c[j] = 0;
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve(a, n);

    return 0;
}