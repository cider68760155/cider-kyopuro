/*
N以下の素数をコンマ区切りでファイル	出力する
*/

int main() {
	const int N = (int)1e8;
	ofstream ofs("sosu.txt");
	vb v;
	v.reserve(N + 1);
	for (int i = 0; i < N + 1; ++i)v.push_back(true);
	ofs << 2;
	for (int i = 2; i <= N; i += 2) v[j] = false;
	for (int i = 3; i <= N; ++i) {
		if (v[i]) {
			ofs << "," << i;
			for (int j = i; j <= N; j += i) v[j] = false;
		}
	}
}