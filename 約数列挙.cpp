/*
	O(sqrt(n))�B���\�[�g�ł��邱�Ƃɒ��ӁI
*/

vi enum_div(int n) {
	vi ans;
	for (int i = 1; i*i <= n; ++i) {
		if (n%i == 0) {
			ans.push_back(i);
			if (i != 1 && i*i != n) {
				ans.push_back(n / i);
			}
		}
	}
	ans.push_back(n);
	return ans;
}