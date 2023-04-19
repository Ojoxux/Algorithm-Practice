//Algo Method  DS_5
#include <bits/stdc++.h>
using namespace std;

// clang-format off
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define vi vector<int>
#define vll vector<ll>
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
    vector<int> a(n),b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];

    const int bunbo = a.size();

    int a_sum = 0,b_sum = 0;
    rep(i,0,n){
        a_sum += abs(a[i]);
        b_sum += abs(b[i]);
    }

    if((float)a_sum / bunbo < (float)b_sum / bunbo){
        cout << "A" << el;
    } 
    else if((float)a_sum / bunbo > (float)b_sum / bunbo){
        cout << "B" << el;
    }
    else cout << "same" << el;
    return 0;
}