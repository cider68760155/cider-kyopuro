int bitsum(int a) {//aの10進数での各桁の和を返す
	int ans = 0;
	string s = to_string(a);
	const int N = s.size();
	for (char x : s) ans += x - '0';
	return ans;
}