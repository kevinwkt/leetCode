class LRUCache {
public:
    
    struct node{
        int val, key;
        node *prev, *next;
        node(int key_, int val_) : key(key_), val(val_), prev(NULL), next(NULL) {}
    };
    
    unordered_map<int,node*> mp;
    node* head;
    node* tail;
    int capacity;
    
    
    LRUCache(int capacity) {
        this->capacity = capacity;
        head = new node(0,0);
        tail = new node(0,0);
        head->next = tail;
        tail->prev = head;
        mp.clear();
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        node* n = mp[key];
        remove(n);
        add(n);
        return n->val;
    }
    
    void put(int key, int value) {
        node* n = new node(key,value);
        add(n);
        
        if(mp.find(key)!=mp.end()){
            remove(mp[key]);
            mp[key] = n;
        }else mp.insert(make_pair(key,n));
        
        if(capacity<mp.size()){
            node* old = head->next;
            remove(old);
            mp.erase(old->key);
        }
    }
    
private:
    void remove(node* n) {
        n->prev->next = n->next;
        n->next->prev = n->prev;
    }
    
    void add(node* n) {
        tail->prev->next = n;
        n->prev = tail->prev;
        n->next = tail;
        tail->prev = n;
    }
};
