//Algo Method  DP_2
#include <bits/stdc++.h>
using namespace std;

// clang-format off
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define rep(i, x, limit) for (int i = (int)x; i < (int)limit; i++)
#define REP(i, x, limit) for (int i = (int)x; i <= (int)limit; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
#define spa " "
#define YES cout << "Yes" << el
#define NO cout << "No" << el

const double pi = 3.141592653589793238;
const int inf = 1073741823;
const ll infl = 1LL << 60;

//配列の要素を空白区切りで出力(デバッグ用)
template<class T> inline void print_vec(const vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        if(v[i]==inf || v[i]==infl) cout << 'o' << spa;
        else cout << v[i] << spa;
    }
    cout << endl;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
// clang-format on

int main() {
    int n;
    cin >> n;
    vi a(n);
    rep(i,0,n) cin >> a[i];

    vi dp(n);
    dp[0] = 0;
    dp[1] = a[1];

    rep(i,2,n){
        dp[i] = min(dp[i - 1] + a[i],dp[i - 2] + a[i] * 2);
    }

    cout << dp[n - 1] << el;
    return 0;
}