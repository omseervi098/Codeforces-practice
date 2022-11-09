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
        int sm = 0, cnt = 0;
        int temp = n;
        while (temp > 0)
        {
            cnt++;
            temp /= 10;
        }
        int curr = n % 10;
        sm += (curr - 1) * 10;
        if (cnt == 1)
            sm += 1;
        else if (cnt == 2)
            sm += 3;
        else if (cnt == 3)
            sm += 6;
        else if (cnt == 4)
            sm += 10;
        cout << sm << endl;
    }
}