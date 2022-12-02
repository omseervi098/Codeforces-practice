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
    size_t found = s.find("0000000");
    if (found != string::npos)
    {
        cout << "YES" << endl;
        return 0;
    }
    size_t check = s.find("1111111");
    if (check != string::npos)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}