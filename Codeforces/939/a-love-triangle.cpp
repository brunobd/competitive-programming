#include <bits/stdc++.h>
using namespace std;
bool solve(int N, const vector<int> &f)
{
    for(int A = 1; A<=N;A++)
    {
        auto B = f[A];
        auto C = f[B];
        if(A == f[C])
            return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<int> f(N+1);
    for(int i = 1; i<=N;i++)
        cin >> f[i];
    auto ans = solve(N,f);
    cout << (ans ? "YES": "NO") << '\n';
    return 0;
}
// Category: Graph
// Status: Accepted