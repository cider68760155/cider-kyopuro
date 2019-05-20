#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
//#define int long long

#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define rep(N) for (int i = 0; i < N; ++i)
#define Rep(a, b) for (int i = a; i < b; ++i)
#define For(i, N) for (int i = 0; i < N; ++i)

#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()

#define mi(N) int N; cin >> N;
#define ms(s) string s; cin >> s;
#define md(d) double d; cin >> d;
#define mv(v, N) vi v(N); rep(N)cin >> v[i];

#define mod 1000000007
#define out_of_grid(x, y) x < 0 || y < 0 || x >= h || y >= w

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vb = vector<bool>;
using vvb = vector<vector<bool>>;
using vs = vector<string>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using msi = map<string, int>;

namespace mp = boost::multiprecision;
using INT = mp::cpp_int;

template<typename T>
void say(T s) {
	cout << s << "\n";
}

template<typename T>
void say(vector<T> s) {
	auto itr = s.begin();
	cout << *(itr++);
	while (itr != s.end()) {
		cout << " " << *(itr++);
	}
	cout << "\n";
}

template<typename T>
void say(vector<T> s, char r) {
	auto itr = s.begin();
	cout << *(itr++);
	while (itr != s.end()) {
		cout << r << *(itr++);
	}
	cout << "\n";
}

void yn(bool b) {
	if (b)say("yes");
	else say("no");
}

void Yn(bool b) {
	if (b)say("Yes");
	else say("No");
}

void YN(bool b) {
	if (b)say("YES");
	else say("NO");
}

void Yay(bool b) {
	if (b)say("Yay!");
	else say(":(");
}

template<typename T>
void maxi(T& a, T b) {
	a = max(a, b);
}

template<typename T>
void mini(T& a, T b) {
	a = min(a, b);
}

template<typename T>
vector<vector<T>> fill_vector(int h, int w, T val) {
	vector<vector<T>> ret;
	vector<T> v(w, val);
	rep(h)ret.push_back(v);
	return ret;
}

signed main() {
	cout.precision(16);
}