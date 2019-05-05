//http://tsutaj.hatenablog.com ���
class SegmentTree {
private:
	int n;
	vector<int> node;

public:
	// ���z�� v ���Z�O�����g�؂ŕ\������
	SegmentTree(vector<int> v) {
		// �ŉ��i�̃m�[�h���͌��z��̃T�C�Y�ȏ�ɂȂ�ŏ��� 2 �p -> ����� n �Ƃ���
		// �Z�O�����g�ؑS�̂ŕK�v�ȃm�[�h���� 2n-1 �ł���
		int sz = v.size();
		n = 1; while (n < sz) n *= 2;
		node.resize(2 * n - 1, INF);

		// �ŉ��i�ɒl����ꂽ���ƂɁA���̒i���珇�Ԃɒl������
		// �l������ɂ́A�����̎q�� 2 �l���Q�Ƃ���Ηǂ�
		for (int i = 0; i < sz; i++) node[i + n - 1] = v[i];
		for (int i = n - 2; i >= 0; i--) node[i] = min(node[2 * i + 1], node[2 * i + 2]);
	}

	void update(int x, int val) {
		// �ŉ��i�̃m�[�h�ɃA�N�Z�X����
		x += (n - 1);

		// �ŉ��i�̃m�[�h���X�V������A���Ƃ͐e�ɏ���čX�V���Ă���
		node[x] = val;
		while (x > 0) {
			x = (x - 1) / 2;
			node[x] = min(node[2 * x + 1], node[2 * x + 2]);
		}
	}
};