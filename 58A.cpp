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
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        while (i < s.size() and s[i] != 'h')
            i++;
        if (i < s.size())
        {
            while (i < s.size() and s[i] != 'e')
            {
                i++;
            }

            if (i == s.size())
            {
                cout << "NO" << endl;
                return 0;
            }
            else
            {
                while (i < s.size() and s[i] != 'l')
                {
                    i++;
                }

                i++;
                if (i >= s.size())
                {
                    cout << "NO" << endl;
                    return 0;
                }

                while (i < s.size() and s[i] != 'l')
                {
                    i++;
                }

                if (i == s.size())
                {
                    cout << "NO" << endl;
                    return 0;
                }
                else
                {
                    while (i < s.size() and s[i] != 'o')
                    {
                        i++;
                    }
                    if (i == s.size())
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                    else
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
}