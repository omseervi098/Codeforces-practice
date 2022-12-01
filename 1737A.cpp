#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef priority_queue<int, vector<int>, greater<int>> minhp;
typedef priority_queue<int> maxhp;
#define ll long long

#define d double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define present(c, x) ((c).find(x) != (c).end())
#define test(t) while (t--)
char calculateMex(string s)
{
    unordered_set<char> Set;
    for (auto i : s)
        Set.insert(i);
    char Mex = 'a';
    while (Set.find(Mex) != Set.end())
        Mex++;
    return (Mex);
}
int main()
{
    int t;
    cin >> t;
    test(t)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(26, 0);
        for (auto it : s)
        {
            v[it - 'a'] += 1;
        }
        // sort(v.begin(), v.end());
        int l = n / k;

        string ans = "";
        for (int i = 0; i < k; i++)
        {

            string t = "";
            for (int k = 0; k < 26; k++)
            {
                if (v[k] > 0)
                {
                    t += char(k + 'a');
                    v[k] -= 1;
                    if (t.size() == l)
                        break;
                }
            }
            // cout << t << " ";
            ans += calculateMex(t);
        }
        cout << ans << endl;
    }
}