//Algo Method  DS_7
#include <bits/stdc++.h>
using namespace std;

// clang-format off
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define vi vector<int>
#define vd vector<double>
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
    vector<double> a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    //平均値を求める
    double a_avg = accumulate(a.begin(),a.end(),(double)0) / n;

    //分散を求める
    double a_var;
    rep(i,0,n){
        a_var += pow((a[i] - a_avg),2);
    }
    a_var /= n;
    
    //標準偏差を求める
    double a_sd = sqrt(a_var);

    cout << fixed << setprecision(10);
    cout << a_var << el;
    cout << a_sd << el;
    return 0;
}

//アルゴ式の模範解答
/*
int main() {
    // 入力
    int N; cin >> N;
	vector<int> A(N), B(N);
	for (int i=0; i<N; i++) cin >> A[i];
	for (int i=0; i<N; i++) cin >> B[i];

    // 分散を求める
	double sum_A = 0, sum_B = 0;
	for (int i=0; i<N; i++) sum_A += pow(A[i],2);
    for (int i=0; i<N; i++) sum_B += pow(B[i],2);
	double var_A = sum_A/N, var_B = sum_B/N;

	// 答えを出力する
    if (var_A<var_B) cout << "A" << endl;
    else if (var_A>var_B) cout << "B" << endl;
    else cout << "same" << endl;
	return 0;
}
*/