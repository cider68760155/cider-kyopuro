const int MAX_V = 100;
const int INF = 100000;
struct edge { int to, cap, rev; };
vector<edge> G[MAX_V]; //グラフの隣接リスト表現
bool used[MAX_V];

void add_edge(int from, int to, int cap) {
	G[from].push_back({ to,cap,G[to].size() });
	G[to].push_back({ from, 0, G[from].size() - 1 });
}

int dfs(int v, int t, int f) {
	if (v == t)return f;
	used[v] = true;
	rep(G[v].size()) {
		edge &e = G[v][i];
		if (!used[e.to] && e.cap > 0) {
			int d = dfs(e.to, t, min(f, e.cap));
			if (d > 0) {
				e.cap -= d;
				G[e.to][e.rev].cap += d;
				return d;
			}
		}
	}
	return 0;
}

int max_flow(int s, int t) {
	int flow = 0;
	while (true) {
		memset(used, 0, sizeof(used));
		int f = dfs(s, t, INF);
		if (f == 0)return flow;
		flow += f;
	}
}