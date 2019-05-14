int N, M;//N���_M�ӃO���t
const int maxN = 100;
const int maxM = 1000;
const int INF = 1000000000;
int d[maxN][maxN];//���ꂼ��̕ӂ̏d�݂ŏ������Ad[i][i]=0
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
