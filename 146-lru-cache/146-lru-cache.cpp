class LRUCache {
public:
    
    class Node {
        public:
            int key;
            int value;
            Node* prev;
            Node* next;
            Node(int fetchedKey, int val) {
                value = val;
                key = fetchedKey;
            }
    };
    
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    
    int cap;
    unordered_map<int, Node*> m;
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    
    void addNode(Node* newNode){
        Node* temp = head->next;
        head->next = newNode;
        newNode->next = temp;
        newNode->prev = head;
        temp->prev = newNode;
    }
    
    
    void deleteNode(Node* node) {
        Node* delPrev = node->prev;
        Node* delNext = node->next;
        delPrev->next = delNext;
        delNext->prev= delPrev;
        // tail->prev->prev->next = tail;
    }
    
    int get(int key) {
        if(m.find(key) != m.end()){
            Node* existingNode = m[key];
            m.erase(key);
            int result = existingNode->value;
            deleteNode(existingNode);
            addNode(existingNode);
            m[key] = head->next;
            return result;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()) {
            Node* exisitingKey = m[key];
            m.erase(key);
            deleteNode(exisitingKey);
        }
        if(m.size() == cap) {
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key, value));
        m[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */