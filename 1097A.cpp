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
    string s;
    cin >> s;
    vector<string> v(5);
    for (auto &it : v)
    {
        cin >> it;
        if (it[0] == s[0] || it[1] == s[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}