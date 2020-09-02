// https://codeforces.com/problemset/problem/205/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res = INT_MAX, cnt = 0, pos = -1;
    int x,n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        if (x<res){
            res = x;
            cnt = 1;
            pos = i+1;
        }
        else if (x==res) cnt++;
    }

    if (cnt==1) cout << pos << endl;
    else cout << "Still Rozdil" << endl;
    return 0;
}