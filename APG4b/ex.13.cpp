//APG4b EX13
#include <bits/stdc++.h>
using namespace std;

// clang-format off
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
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
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];

    int sum = 0;
    rep(i,0,n){
        sum += a[i];
    }

    int avg = sum / n;

    rep(i,0,n){
        a[i] = abs(a[i] - avg);
    }

    rep(i,0,n){
        cout << a[i] << el;
    }
}

// 模範解答
/*
// 合計点
  int sum = 0;
 
  // 合計点を計算
  for (int i = 0; i < N; i++) {
 
    // ①ここにプログラムを追記
    sum += A.at(i);
 
  }
 
  // 平均点
  int mean = sum / N;
 
  // 平均点から何点離れているかを計算して出力
  for (int i = 0; i < N; i++) {
 
    // ②ここにプログラムを追記
    // 負の数を出力しないように注意
    if (A.at(i) > mean) {
      cout << A.at(i) - mean << endl;
    }
    else {
      cout << mean - A.at(i) << endl;
    }
 
  }
*/