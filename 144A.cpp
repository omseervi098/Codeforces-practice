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
    int n;
    cin >> n;
    vector<ll> v(n);
    int mn = INT_MAX, mx = 0, mnidx = -1, mxidx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > mx)
        {
            mx = v[i];
            mxidx = i;
        }
        if (v[i] <= mn)
        {
            mn = v[i];
            mnidx = i;
        }
    }
    if (mxidx < mnidx)
    {
        cout << mxidx + (n - mnidx - 1) << endl;
    }
    else
    {
        cout << (mxidx + (n - mnidx - 1) - 1) << endl;
    }
}