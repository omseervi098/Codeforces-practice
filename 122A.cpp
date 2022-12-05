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
    int temp = n;
    if (temp % 4 == 0 || temp % 7 == 0 || temp % 47 == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    while (n > 0)
    {
        int check = n % 10;
        if (check != 4 and check != 7)
        {
            cout << "NO" << endl;
            return 0;
        }
        n /= 10;
    }
    cout << "YES" << endl;
}