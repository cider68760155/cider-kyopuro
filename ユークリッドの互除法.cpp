//2数の最大公約数を返す．
int gcd(int a, int b) {
	if (a < b)swap(a, b);
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}