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
        string s;
        cin >> s;
        int cnt = 0;
        string t = s;
        sort(t.begin(), t.end());
        if (s == t)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                while (s[i] == '1')
                    i++;
                for (; i < s.size() - 1; i++)
                {
                    if (s[i] == '0' and s[i + 1] == '1')
                        cnt++;
                    if (s[i] == '1' and s[i + 1] == '0')
                        cnt++;
                }
            }
        }
        cout << cnt + 1 << endl;
    }
}