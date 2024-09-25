struct node {
    int val;
    node(int val_ = 0) : val(val_) {}
    friend node merge(const node &a, const node &b) {
        node tmp;
        tmp.val = a.val + b.val;
        return tmp;
    }
};
 
class STREE {
private:
    node _default;
    int n;
    vector<node> tree;
 
    void build(const vector<int> &v, int cur, int l, int r) {
        if(l == r) {
            tree[cur].val = v[l];
            return;
        }
        int mid = (l + r) / 2;
        build(v, 2 * cur, l, mid);
        build(v, 2 * cur + 1, mid + 1, r);
        tree[cur] = merge(tree[2 * cur], tree[2 * cur + 1]);
    }
 
public:
    STREE(const vector<int> &v) {
        n = int(v.size());
        _default = 0;
        tree.resize(4 * n);
        build(v, 1, 0, n - 1);
     }
 
    void update(int i, int val, int cur = 1, int l = 0, int r = -1) {
          if(r < 0) r += n;
          if (r == l && i == l) {
               tree[cur].val = val;
               return;
          }
          int mid = (l + r) / 2;
          if (i <= mid) update(i, val, 2 * cur, l, mid);
          else update(i, val, 2 * cur + 1, mid + 1, r);
          tree[cur] = merge(tree[2 * cur], tree[2 * cur + 1]);
     }
 
    node query(int i1, int i2, int cur = 1, int l = 0, int r = -1) { //[i1, i2] inclusive ....
          if(r < 0) r += n;
          if (l >= i1 && r <= i2) return tree[cur];
          else if (l > i2 || r < i1) return _default;
 
          int mid = (l + r) / 2;
          node val1 = query(i1, i2, 2 * cur, l, mid);
          node val2 = query(i1, i2, 2 * cur + 1,  mid + 1, r);
          return merge(val2, val1);
     }
};
