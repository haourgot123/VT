#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int v, e;
        cin >> v >> e;
        vector<int> ke[v+1];
        for(int i = 1; i <= e; i++)
        {
            int a, b;
            cin >> a >> b;
            ke[a].push_back(b);
        }
        for(int i = 1; i <= v; i++)
        {
            sort(ke[i].begin(), ke[i].end());
        }
        for(int i = 1; i <= v; i++)
        {
            cout << i << ": ";
            for(int j = 0; j < ke[i].size(); j++)
            {
                cout << ke[i][j] << " ";
            }
            cout << endl;
        }
    }
}