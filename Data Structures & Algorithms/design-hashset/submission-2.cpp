class MyHashSet {
public:
    unordered_set<int> container;

    MyHashSet() {}

    void add(int key) {
        container.insert(key);
    }
    
    void remove(int key) {
        container.erase(key);
    }
    
    bool contains(int key) {
        return container.count(key);
    }
};
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */