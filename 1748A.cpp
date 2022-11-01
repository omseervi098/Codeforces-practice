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
    int t;
    cin >> t;
    test(t)
    {
        int n, m;
        cin >> n >> m;
        vector<bool> check(n * n);
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            check[x - 1] = true;
            check[x + (y) * (n)] = true;
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (check[i] == false)
            {
                flag = true;
            }
        }
        if (flag)
        {
            for (int i = n; i < n * n; i++)
            {
                if (check[i] == false)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}