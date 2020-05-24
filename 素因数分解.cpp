//n‚Ì‘fˆö”•ª‰ğ
template<typename T>
map<T, T> prime_fact(T n) {
	map<T, T> ret;
	for (T prime : eratosthenes<T>(sqrt(n))) {
		while (n % prime == 0) {
			n /= prime;
			++ret[prime];
		}
	}
	if (n != 1)++ret[n];
	return ret;
}