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
    int k = 1;
    while (k <= n)
    {
        if (k == n)
        {
            if (n % 2 == 0)
                cout << "I love it";
            else
                cout << "I hate it";
        }
        else if (k % 2 == 1)
        {
            cout << "I hate that ";
        }
        else if (k % 2 == 0)
            cout << "I love that ";
        k++;
    }
    cout << endl;
}