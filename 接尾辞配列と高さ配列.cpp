struct Lcp {
	vector<ll> Rank;
	vector<ll> tmp;
	vector<ll> sa;
	vector<ll> lcp;
	string s;
	ll n;
	ll k;

	bool comp_sa(ll i, ll j) {
		if (Rank[i] != Rank[j])return Rank[i] < Rank[j];
		else {
			ll ri = i + k <= n ? Rank[i + k] : -1;
			ll rj = i + k <= n ? Rank[j + k] : -1;
			return ri < rj;
		}
	}
	Lcp(string si) {
		s = si;
		n = s.size();
		Rank.resize(n + 1);
		tmp.resize(n + 1);
		sa.resize(n + 1);
		lcp.resize(n + 1);
		construct_sa();
		construct_lcp();
	}

	void construct_sa() {
		for (ll i = 0; i <= n; ++i) {
			sa[i] = i;
			Rank[i] = i < n ? s[i] : -1;
		}

		for (k = 1; k <= n; k *= 2) {
			sort(sa.begin(), sa.end(), comp_sa);
			tmp[sa[0]] = 0;
			for (ll i = 1; i <= n; ++i) {
				tmp[sa[i]] = tmp[sa[i - 1]] + (comp_sa(sa[i - 1], sa[i]) ? 1 : 0);
			}
			Rank = tmp;
		}
	}

	void construct_lcp() {
		for (ll i = 0; i <= n; ++i)Rank[sa[i]] = i;
		ll h = 0;
		lcp[0] = 0;
		for (ll i = 0; i < n; ++i) {
			ll j = sa[Rank[i] - 1];
			if (h > 0)--h;
			for (; j + h < n && i + h < n; ++h) {
				if (s[j + h] != s[i + h])break;
			}
			lcp[Rank[i] - 1] = h;
		}
	}
};