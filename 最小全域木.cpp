const int INF = 100000000;
const int MAX_V = 10000;
int cost[MAX_V][MAX_V];
int mincost[MAX_V];
bool used[MAX_V];
int V;

int prim() {
	for (int i = 0; i < V; ++i) {
		mincost[i] = INF;
		used[i] = false;
	}
	mincost[0] = 0;
	int res = 0;
	while (true) {
		int v = -1;
		for (int i = 0; i < V; ++i) {
			if (!used[i] && (v == -1 || mincost[i] < mincost[v]))v = i;
		}
		if (v == -1)break;
		used[v] = true;
		res += mincost[v];

		for (int i = 0; i < V; ++i) {
			mincost[i] = min(mincost[i], cost[v][i]);
		}
	}
	return res;
}