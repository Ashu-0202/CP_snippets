struct Trie {
private:
    struct node {
        node *arr[26];
        int cnt;
        node() : cnt(0) {
            for(int i = 0; i < 26; i++) arr[i] = NULL;
        }
    };
    node *root;

public:
    Trie() : root(new node()) {}

    void insert(stri+ng &s, int i = 0) {
        node *r = root;
        for(; i < int(s.size()); i++) {
            if(r->arr[s[i] - 'a'] == NULL)
                r->arr[s[i] - 'a'] = new node();
            r = r->arr[s[i] - 'a'];
            r->cnt++;        // Change here as per requirement
        }
    }

    int count(string &s, int i = 0) {
        int ans = 0;
        node *r = root;
        for(; i < int(s.size()); i++) {
            if(r->arr[s[i] - 'a'] == NULL) break;
            r = r->arr[s[i] - 'a'];
            ans += r->cnt;   // Change here as per need
        }
        return ans;
    }
};
