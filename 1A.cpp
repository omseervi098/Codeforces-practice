#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef priority_queue<int, vector<int>, greater<int>> minhp;
typedef priority_queue<int> maxhp;
#define ll long long

#define test(t) while (t--)
int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = ceil(m / ((double)a)) * ceil(n / ((double)a));
    cout << ans << endl;
}