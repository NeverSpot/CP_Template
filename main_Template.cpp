/* "If I can run I will run , If I can walk I will walk , If I can crawl I will crawl" */
/*                           " But I will NEVER_STOP "                                 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <random>
using namespace std;
using namespace __gnu_pbds;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define NeverSpot cout.tie(NULL);
#define int long long
#define double long double
#define f first
#define s second
#define ed <<"\n";
#define sped <<" ";
#define sp <<" "<<
#define ci  cin>>
#define co  cout<<
#define ld cout<<" Insha " ed
#define v(x) cout << #x << "=" << x ed;
#define v2(x, y) cout << #x << "=" << x << "," << #y << "=" << y ed;
#define all(x) (x).begin(),(x).end()
#define fl(a,b) for (int i=a;i<(b);++i)
#define rfl(a,b) for (int i=a;i>=(b);--i)
#define sl(a,b) for (int j=a;j<(b);++j)
#define rsl(a,b) for (int j=a;j>=(b);--j)
#define tl(a,b) for (int k=a;k<(b);++k)
#define rtl(a,b) for (int k=a;k>=(b);--k)
#define test(t) int t;ci t;while (t--)
#define sortv(v) sort(all(v));
#define sumv(arr) accumulate(all(arr),0LL)
#define rev(v) reverse(all(v));
#define ai(o) vi o;fl(0,n){int p ; ci p ; (o).push_back(p);}
#define pi 3.14159265358979
#define Mod 1000000007ll
#define Emod 998244353ll
#define inf 1000000000000000009ll
#define gcd __gcd
inline int Sqrt(int x){ int y=(int)sqrt(x)+5;while(y*y>x)y--;return y;}
#define log2(x) (64 - __builtin_clzll(x) - 1) // log2 in O(1) time
typedef map<int,int> mii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vector<bool>> vvb;
typedef vector<vector<char>> vvc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<pair<int,int>>> vvp;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vp;
typedef priority_queue<int> pqmax;
typedef priority_queue<int,vi,greater<>> pqmin;
#define Ceil(a,b) ((a+b-1)/b)
typedef tree<int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> order_set; // find_by_order, order_of_key
typedef tree<pair<int,int>, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update> order_multiset; // find_by_order, order_of_key
string al="abcdefghijklmnopqrstuvwxyz";
//.........For Taking Mod............//
inline int power(int a, int b, int mod=inf) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
inline int mminvprime(int a, int b) {return power(a, b - 2, b);}
inline int mod_add(int a, int b, int m=Mod) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
inline int mod_mul(int a, int b, int m=Mod) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
inline int mod_sub(int a, int b, int m=Mod) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
inline int mod_div(int a, int b, int m=Mod) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
//.........Bit_Manipulation...........//
#define msb(mask) (63-__builtin_clzll(mask))  /// 0 -> -1
#define lsb(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define cntsetbit(mask) __builtin_popcountll(mask)
#define checkbit(mask,bit) ((mask >> bit) & 1ll)
#define onbit(mask,bit) ((mask)|(1LL<<(bit)))
#define offbit(mask,bit) ((mask)&~(1LL<<(bit)))
#define changebit(mask,bit) ((mask)^(1LL<<bit))
// Function
#define print(arr) for(auto &o:(arr)){co o sped;} cout ed
inline bool isPrime(int v) {if(v==1) return false; if(v <= 3)return true;if ( v % 2 == 0 || v % 3 == 0)return false;int i = 5;while (i * i <= v) {if (v % i == 0 || v % (i + 2) == 0)return false;i += 6;}return true;}
inline void printbin(int v,int upto=10) {co v<<"-> ";for (int i = upto; i >= 0; --i) {co checkbit(v,i) sped}cout ed}
#define N 1000009
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
inline bool limit_check(int a,int b){return (msb(a)+msb(b)<=59);}
// Free to use :}


void solve() {
    // Global Variables
    int n, m, k, d, x, y;
    string str;
    //------------------------------RISHU------------------------------//


}

signed main() {
    Code By NeverSpot
    test(t){
//          cout << "Case #" << T << ": ";
        solve();
    }
    return 0;
}
