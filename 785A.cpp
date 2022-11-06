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
    int sm = 0;
    while (n-- > 0)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
            sm += 4;
        else if (s == "Cube")
            sm += 6;
        else if (s == "Octahedron")
            sm += 8;
        else if (s == "Dodecahedron")
            sm += 12;
        else if (s == "Icosahedron")
            sm += 20;
    }
    cout << sm << endl;
}