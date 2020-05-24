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

	int getmin(int a, int b, int k = 0, int l = 0, int r = -1) {
		// �ŏ��ɌĂяo���ꂽ�Ƃ��̑Ώۋ�Ԃ� [0, n)
		if (r < 0) r = n;

		// �v����ԂƑΏۋ�Ԃ������Ȃ� -> �K���ɕԂ�
		if (r <= a || b <= l) return INF;

		// �v����Ԃ��Ώۋ�Ԃ����S�ɔ핢 -> �Ώۋ�Ԃ𓚂��̌v�Z�Ɏg��
		if (a <= l && r <= b) return node[k];

		// �v����Ԃ��Ώۋ�Ԃ̈ꕔ��핢 -> �q�ɂ��ĒT�����s��
		// �����̎q�� vl �E �E���̎q�� vr �Ƃ��Ă���
		// �V�����Ώۋ�Ԃ́A���݂̑Ώۋ�Ԃ𔼕��Ɋ���������
		int vl = getmin(a, b, 2 * k + 1, l, (l + r) / 2);
		int vr = getmin(a, b, 2 * k + 2, (l + r) / 2, r);
		return min(vl, vr);
	}
};