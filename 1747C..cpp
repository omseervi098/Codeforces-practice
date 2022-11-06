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
        int n;
        cin >> n;
        vi v(n);
        for (auto &i : v)
            cin >> i;
        int sm = accumulate(v.begin(), v.end(), 0);
        if (sm % 2 == 0)
            cout << "Bob" << endl;
        else if (sm % 2 == 1 and n % 2 == 1)
            cout << "Alice" << endl;
    }
}
// 1 2 1 --> 2 1 0 --> 1 1 0 --> 1 0 0 --> 0 0 0