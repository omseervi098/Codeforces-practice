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
    ll n;
    cin >> n;
    // n==5 (5*(4+2))
    ll a = (n / 2.0);
    ll b = (n + 1) / 2.0;
    cout << (a * (4 + ((a - 1) * 2)) / 2) - (b * (2 + ((b - 1) * 2)) / 2) << endl;
}