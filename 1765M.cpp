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
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    int t;
    cin >> t;
    test(t)
    {
        ll n;
        cin >> n;
        ll i = 1;
        ll mn = INT_MAX;
        ll x = 0, y = 0;
        if (isPrime(n))
        {
            cout << 1 << " " << n - 1 << endl;
        }
        else
        {
            for (ll j = 2; j <= n / 2; j++)
            {
                if (n % j == 0)
                {
                    x = n / j;
                    y = n / j * (j - 1);
                    break;
                }
            }
            cout << x << " " << y << endl;
        }
    }
}