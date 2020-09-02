#include<bits/stdc++.h>
#define ll             long long
#define FOR(i, n)      for (ll i=0; i<n; i++)

using namespace std;
const int maxN = 1e5+5;
int arr[100100];

int main()
{
	int n; cin>>n;
	string s; cin>>s;
	string res = "0000000000";

	FOR(i,n){
		if(s[i]=='L'){
			int idx = res.find('0'); // finding left most 0.
			res[idx]='1';
		}
		else if (s[i]=='R'){
			int idx = res.rfind('0'); //finding right most 0.
			res[idx] = '1'; 
		}
		else{
			int idx = s[i] - '0';
			res[idx] = '0';
		}
	}
	cout<<res<<endl;
	return 0;
}
//https://codeforces.com/problemset/problem/1200/A