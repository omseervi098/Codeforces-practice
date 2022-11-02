#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef priority_queue<int, vector<int>, greater<int>> minhp;
typedef priority_queue<int> maxhp;
#define ll long long
#define d double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define present(c, x) ((c).find(x) != (c).end())
#define test(t) while (t--)
int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m)), temp(n, vector<int>(m));
    for (auto &i : v)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }
    for (auto &i : temp)
    {
        for (auto &j : i)
        {
            j = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0)
            {
                for (int l = 0; l < n; l++)
                {
                    temp[l][j] = 0;
                }
                for (int l = 0; l < m; l++)
                {
                    temp[i][l] = 0;
                }
            }
        }
    }

    // To check if we can form v from temp
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ans = 0;
            for (int l = 0; l < n; l++)
            {
                ans |= temp[l][j];
            }
            for (int l = 0; l < m; l++)
            {
                ans |= temp[i][l];
            }

            if (ans != v[i][j])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    for (auto it : temp)
    {
        for (auto j : it)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
