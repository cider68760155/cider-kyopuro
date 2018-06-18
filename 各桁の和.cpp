int bitsum(int a) {//a‚Ì10i”‚Å‚ÌŠeŒ…‚Ì˜a‚ğ•Ô‚·
	int ans = 0;
	string s = to_string(a);
	const int N = s.size();
	for (char x : s) ans += x - '0';
	return ans;
}