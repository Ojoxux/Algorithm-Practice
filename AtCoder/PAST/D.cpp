//PAST過去問　D
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
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> counts(N + 1, 0);

    //値の読み込みとともに1からNまでの出現回数をcountにインクリメントしている
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        counts[A[i]]++;
    }

    int missing = -1;
    int duplicate = -1;

    for (int i = 1; i <= N; i++) {
        if (counts[i] == 0) {
            missing = i;
        } else if (counts[i] == 2) {
            duplicate = i;
        }
    }

    //特に値の更新もなかったら1からNまでの値が揃っている
    if (missing == -1 && duplicate == -1) {
        cout << "Correct" << endl;
    } else {
        cout << duplicate << " " << missing << endl;
    }

    return 0;
}