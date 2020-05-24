//nˆÈ‰º‚Ì‘f”‚ğ‹‚ß‚é
template<typename T>
vector<T> eratosthenes(T n) {
	vector<T> ret;
	vector<bool> v;
	v.reserve(n + 1);
	for (T i = 0; i < n + 1; ++i)v.push_back(true);
	ret.push_back(2);
	for (T i = 2; i <= n; i += 2) v[i] = false;
	for (T i = 3; i <= n; ++i) {
		if (v[i]) {
			ret.push_back(i);
			for (T j = i; j <= n; j += i) v[j] = false;
		}
	}
	return ret;
}