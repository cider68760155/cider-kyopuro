template <typename T>
T kaijou(T x) {
	if (x == 1)return 1;
	else return x * kaijou(x - 1);
}

//組み合わせ。遅かったから、いつかメモ化したい
template <typename T>
T C(T x, T y) {
	if (y == 0 || x == y)return 1;
	else return C(x - 1, y - 1) + C(x - 1, y);
}

//マンハッタン距離
template<typename T>
T dif(T x1, T x2, T y1, T y2) {
	return abs(x1 - x2) + abs(y1 - y2);
}

//Nの10^iの位の数字を返す。
int kurai(int n, int i) {
	string s = to_string(n);
	if (i >= s.size())return 0;
	return s[s.size() - i - 1] - '0';
}
