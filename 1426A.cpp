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
        int n, x;
        cin >> n >> x;
        int cnt = 0;
        if (n == 1 || n == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cnt = 1;
            int t = 2;
            while (t < n)
            {
                t += x;
                cnt++;
            }

            cout << cnt << endl;
        }
    }
}