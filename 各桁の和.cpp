int bitsum(int a) {//a��10�i���ł̊e���̘a��Ԃ�
	int ans = 0;
	string s = to_string(a);
	const int N = s.size();
	for (char x : s) ans += x - '0';
	return ans;
}