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
    int x, y;
    cin >> x;
    vector<int> v(x);
    set<int> s;
    for (auto &i : v)
    {
        cin >> i;
        s.insert(i);
    }
    cin >> y;
    vector<int> w(y);
    for (auto &i : w)
    {
        cin >> i;
        s.insert(i);
    }
    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}