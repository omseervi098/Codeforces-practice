#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef priority_queue<int, vector<int>, greater<int>> minhp;
typedef priority_queue<int> maxhp;
#define ll long long
#define l long
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
    vector<vector<char>> v(n, vector<char>(m, '.'));
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                v[i][j] = '#';
            }
        }
        else
        {
            if (!flag)
            {
                v[i][m - 1] = '#';
            }
            else
            {
                v[i][0] = '#';
            }
            flag = !flag;
        }
    }
    for (auto &it : v)
    {
        for (auto j : it)
            cout << j;
        cout << endl;
    }
}