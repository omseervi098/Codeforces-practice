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
    unordered_set<int> st = {'A',
                             'O',
                             'E',
                             'U',
                             'Y',
                             'I',
                             'a',
                             'o',
                             'e',
                             'y',
                             'u',
                             'i'};
    string ans = "";
    if (st.count(s[0]) == 0)
    {
        ans += '.';
        if (s[0] >= 'A' and s[0] <= 'Z')
            ans += s[0] + 32;
        else
            ans += s[0];
    }
    for (int i = 0; i < s.size(); i++)
    {

        if (i + 1 < s.size() and st.count(s[i + 1]) == 0)
        {
            ans += '.';
            if (s[i + 1] >= 'A' and s[i + 1] <= 'Z')
                ans += s[i + 1] + 32;
            else
                ans += s[i + 1];
        }
    }
    cout << ans << endl;
}