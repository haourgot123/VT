#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        long long MAX = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int pos1 = i, pos2 = i, s1 = 0, s2 = 0;
            while (a[pos1] >= a[i] && pos1 >= 0)
            {
                pos1--;
                s1++;
            }
            while (a[pos2] >= a[i] && pos2 < n)
            {
                pos2++;
                s2++;
            }
            MAX = max(MAX, a[i] * (s1 + s2 - 1));
        }
        cout << MAX << "\n";
    }
}
