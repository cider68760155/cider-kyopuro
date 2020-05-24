template <typename T>
T kaijou(T x) {
	if (x == 1)return 1;
	else return x * kaijou(x - 1);
}

//組み合わせ(DP)
int nmax = 150;
int c[nmax][nmax];
ll C(ll x, ll y) {
	if (c[x][y] > 0)return c[x][y];
	if (y == 0 || x == y)return 1;
	return c[x][y] = C(x - 1, y - 1) + C(x - 1, y);
}

//マンハッタン距離
template<typename T>
T dif(T x1, T x2, T y1, T y2) {
	return abs(x1 - x2) + abs(y1 - y2);
}

//Nの10^iの位の数字を返す。
int kurai(int n, int i) {
	string s = to_string(n);
	if (i >= s.size())return 0;
	return s[s.size() - i - 1] - '0';
}

//組み合わせ(https://drken1215.hatenablog.com/entry/2018/06/08/210000)
struct combination {
	const int MAX = 510000;
	const int MOD;
	vector<long long> fac, finv, inv;

	combination(int mod) :MOD(mod) {
		fac.resize(MAX);
		finv.resize(MAX);
		inv.resize(MAX);
		fac[0] = fac[1] = 1;
		finv[0] = finv[1] = 1;
		inv[1] = 1;
		for (int i = 2; i < MAX; i++) {
			fac[i] = fac[i - 1] * i % MOD;
			inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
			finv[i] = finv[i - 1] * inv[i] % MOD;
		}
	}

	long long COM(int n, int k) {
		if (n < k) return 0;
		if (n < 0 || k < 0) return 0;
		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
	}
};