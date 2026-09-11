#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //sort(a,a+n);//ascending sort choto thke boro
    sort(a,a+n,greater<int>());// Descinding order boro theke choto 
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<endl;
    }

    return 0;
}