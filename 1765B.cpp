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
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            if (j % 2 == 1)
            {
                if (i + 1 < n and s[i] != s[i + 1])
                {
                    break;
                }
                i++;
                j++;
            }
            else
            {

                j++;
            }
        }
        if (i == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}