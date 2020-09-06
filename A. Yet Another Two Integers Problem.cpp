/*****************************************
* In the name of Almighty Allah*
* AUTHOR:Md Habib Hasan Shakil Buya*
* ID: 201932130119 *
* INSTITUTION: Zhejiang Normal University, Zhejiang, China*
******************************************/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long 
#define FOR(i, n)      for (ll i=0; i<n; i++)
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define ALL(a)           a.begin(),a.end()
#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

const double PI = acos(-1);
const double eps = 1e-9;
const int maxN = 1e5+5;

//.......................Debugger_start:.............................................................................

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}

//..............................Debugger_end.......................................................................


int main()
{
    optimize();
    ll t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;

        ll ans;
        if(a==b) ans = 0;

        else{
            ll dif = abs(b-a);
            if(dif<10){
                ans = 1;
            }
            else{
                if(dif%10==0){
                    ans = dif/10;
                }
                else
                    ans = (dif/10)+1;
            }
        }

        cout<<ans<<endl;
    }
}
