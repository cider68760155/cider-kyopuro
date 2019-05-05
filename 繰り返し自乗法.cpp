//a^r % mod
int modPow(int a, int r, int mod) {
	if (r == 0) return 1;
	if (r % 2 == 0) {
		int t = modPow(a, r / 2, mod);
		return t * t% mod;
	}
	return a * modPow(a, r - 1, mod);
}