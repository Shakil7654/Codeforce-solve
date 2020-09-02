#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define for1(i,n)  for(int i=1;i<(n);++i)

#define F first
#define S second
const int  inf = INT_MAX;
using namespace std;

void sol() {

    int n; cin >> n;
    int a[n];
    rep(i, 0, n)cin >> a[i];

    pair<int,int>ans;
    int mn = inf;
    for1(i, n) {
        if (abs(a[i] - a[i - 1]) < mn) {
            mn = abs(a[i] - a[i - 1]);
            ans = {i, i + 1};
        }
    }
    if (abs(a[n - 1] - a[0]) < mn)ans = {1, n};

    cout << ans.F << " " << ans.S;
}
int main() {
        sol();
    return 0;
}