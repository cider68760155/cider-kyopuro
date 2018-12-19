int N, M;//N���_M�ӃO���t
const int maxN = 100;
const int maxM = 1000;
const int INF = 1000000000;
int d[maxN][maxN];//���ꂼ��̕ӂ̏d�݂ŏ������Ad[i][i]=0
int previ[maxN];

void warshall_floyd() {
	For(i, N) {
		For(j, N) {
			For(k, N) {
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

int main() {
	cin >> N >> M;
	rep(M) {
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = d[b][a] = c;
	}
	rep(N)d[i][i] = 0;
}