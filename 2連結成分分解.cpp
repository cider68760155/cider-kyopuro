int N;
int M;
int i = 1;
vector<int> lab(N), lowpt(N), parent(N);
vector<vector<int>> BC;
vector<int> bc;
vector<int> L(M), R(M);
deque<int> Edge_stack;

void DFS_BCC(int v)
{
	lab[v] = i;
	lowpt[v] = i;
	++i;
	for (int i = 0; i < N; ++i)
	{
		int w = -1;
		if (L[i] == v)
			w = R[i];
		else
			(R[i] == v) w = L[i];
		if (w != -1)
		{
			if (lab(w) == 0)
			{
				Edge_stack.push_back(i);
				parent[w] = v;
				DFS_BCC(w);
				if (lowpt[w] >= lowpt[v])
				{
					bc.clear();
					while (Edge_stack.back() != i)
					{
						bc.push_back(Edge_stack.back());
						bc.pop_back();
					}
					bc.push_back(Edge_stack.back());
					Edge_stack.pop_back();
					BC.push_back(bc);
				}
				lowpt[v] = min(lowpt[v], lowpt[w]);
			}
			else if (lab(w) < lab(v) && w != parent[v])
			{
				Edge_stack.push_back(i);
				lowpt[v] = min(lowpt[v], lab[w]);
			}
		}
	}
}

int main()
{
	bool flag;
	Edge_stack.clear();
	for (int i = 0; i < N; ++i) lab[i] = 0;
	do
	{
		flag = false;
		for (int i = 0; i < N; ++i) if (lab[i] == 0)
		{
			flag = true;
			parent[i] = -1;
			DFS_BCC(i);
		}
	} while (flag);
}