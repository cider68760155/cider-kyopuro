int N, M;//N頂点M辺グラフ
const int maxN = 100;
const int maxM = 1000;
const int INF = 1000000000;
int d[maxN][maxN];//それぞれの辺の重みで初期化、d[i][i]=0
int previ[maxN];

void warshall_floyd() {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			for (int k = 0; k < N; ++k) {
				if (d[i][j] <= d[i][k] + d[k][j]) {
					previ[i] = j;
					previ[j] = i;
				}
				else {
					d[i][j] = d[i][k] + d[k][j];
					previ[i] = k;
					previ[j] = k;
				}
			}
		}
	}
}
