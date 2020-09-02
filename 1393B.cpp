#include<bits/stdc++.h>
#define ll             long long
#define FOR(i, n)      for (ll i=0; i<n; i++)
using namespace std;
const int maxN = 1e5+5;
int arr[100100];
int a[maxN];
int cnt[maxN];

int main()
{
    int n; cin>>n;
    FOR(i,n){
        int x; cin>>x;
        a[x]++;
        cnt[a[x]]++;
    }
    int q;cin>>q;
    FOR(i,n){
        char c; cin>>c;
        int x;cin>>x;
        if(c=='+'){
            a[x]++;
            cnt[a[x]]++;
        }
        else{
            cnt[a[x]]--;
            a[x]--;
        }
        if( cnt[8]>0||cnt[4]>=2|| (cnt[6]>0 && cnt[2]>=2) || (cnt[4]>0 && cnt[2]>=3) ){
            cout<<"YES\n";
        }
        else{cout<<"NO\n";}
    }
    return 0;
}

