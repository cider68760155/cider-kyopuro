//2”‚ÌÅ‘åŒö–ñ”‚ğ•Ô‚·D
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