#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<fstream>
#include<utility>
#include<bitset>
#include<map>
#include<deque>
#include<cmath>
#define FOR(i, a, b) for (i = a; i < b; ++i)
#define rep(N) for (int i = 0; i < N; ++i)
#define For(i, N) for (i = 0; i < N; ++i)
#define rev(N) 	for (int i = N - 1; i >= 0; --i)
#define all(v) v.begin(), v.end()
#define make(N) int N; cin >> N;
#define mod 1000000007
#define re return 0

using namespace std;
using ll = long long int;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vb = vector<bool>;
using vvb = vector<vector<bool>>;
using vs = vector<string>;
using pii = pair<int, int>;
using pis = pair<int, string>;

template<typename T>
void say(T s) {
	cout << s << endl;
}

template<typename T>
void say(vector<T> s) {
	auto itr = s.begin();
	cout << *(itr++);
	while (itr != s.end()) {
		cout << " " << *(itr++);
	}
	cout << endl;
}

int main() {
	ofstream outputfile("memo.txt");
	outputfile << "‘‚«‚½‚¢‚±‚Æ";
	outputfile.close();
}