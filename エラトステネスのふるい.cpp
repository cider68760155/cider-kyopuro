/*
N以下の素数をコンマ区切りでファイル	出力する
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<fstream>
#include<utility>
#include<bitset>
#define rep(N) for (int i = 0; i < N; i++)
#define For(i, N) for (i = 0; i < N; i++)
#define mod 1e9+7
#define re return 0
#define rev(N) 	for (int i = N - 1; i >= 0; --i)
#define all(v) v.begin(), v.end()

using namespace std;
using ll = long long int;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vector<int>>;
using vb = vector<bool>;
using vs = vector<string>;
using pii = pair<int, int>;
using pis = pair<int, string>;

template<typename T>
void say(T s) {
	cout << s << endl;
}

template<typename T1, typename T2>
void say(T1 s1, T2 s2) {
	cout << s1 << " " << s2 << endl;
}

int main() {
	const int N = (int)1e9;
	ofstream ofs("sosu.txt");
	vb v;
	v.reserve(N + 1);
	rep(N + 1)v.push_back(true);
	ofs << 2;
	for (int i = 3; i <= N; ++i) {
		if (v[i]) {
			ofs << "," << i;
			for (int j = i; j <= N; j += i) v[j] = false;
		}
	}
}