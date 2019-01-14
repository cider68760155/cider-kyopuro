class union_find_tree {
public:
	int N;//—v‘f”
	vi parent;
	vi hight;

	union_find_tree(int n) {
		N = n;
		rep(N) {
			parent.push_back(i);
			hight.push_back(0);
		}
	}

	int find_root(int x) {
		if (parent[x] == x)return x;
		else return parent[x] = find_root(parent[x]);
	}

	void unite(int x, int y) {
		x = find_root(x);
		y = find_root(y);
		if (x == y)return;

		if (hight[x] < hight[y]) parent[x] = y;
		else {
			parent[y] = x;
			if (hight[x] == hight[y])++hight[x];
		}
	}

	bool same(int x, int y) {
		return find_root(x) == find_root(y);
	}
};