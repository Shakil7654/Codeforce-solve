#include<bits/stdc++.h>
#define ll             long long
#define FOR(i, n)      for (ll i=0; i<n; i++)

using namespace std;
const int maxN = 1e5+5;
int arr[100100];

int main()
{
    int f; cin>>f;
    int arr[f];
    FOR(i,f) cin>>arr[i];

    int b; cin>>b;
    int arr2[b];
    FOR(i,b) cin>>arr2[i];

    map<int,int> m;

    for(int i=0; i<f; i++){
        for(int j=0; j<b; j++){
            if(arr2[j]%arr[i]==0){
            int ans = arr2[j]/arr[i];
            m[ans]++;
            }
        }
    }
    map<int, int>::iterator itr;
    itr = m.end();
    --itr;
    cout<<itr->second<<endl;
}