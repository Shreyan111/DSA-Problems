class LRUCache {
public:
    struct ListNode {
     int val1 , val2;
     ListNode *next , *prev;
     ListNode(int x , int y) : val1(x), val2(y) , next(NULL) , prev(NULL){}
  };
    
    int cap;
    unordered_map<int , ListNode*> mp;
    
    ListNode* head=new ListNode(-1 , -1);
    ListNode* tail=new ListNode(-1 , -1);
    
    LRUCache(int capacity) {
        head->next=tail;
        tail->prev=head;
        cap=capacity;
    }
    
    void delete_node(ListNode* node)
    {
        ListNode* p=node->prev;
        ListNode* n=node->next;
        
        p->next=n;
        n->prev=p;
        
        node->next=NULL;
        node->prev=NULL;
        
      //  delete(node);
    }
    
    void insert_node(ListNode* node)
    {
        ListNode* n=head->next;
        head->next=node;
        n->prev=node;
        node->prev=head;
        node->next=n;
    }
    
    int get(int key) {
        
        if(mp.find(key)==mp.end())
        {
            return -1;
        }
        
        ListNode* node=mp[key];
        int value=node->val2;
        mp.erase(node->val1);
        delete_node(node);
      
        
        node=new ListNode(key , value);
        insert_node(node);
        mp[key]=node;
        
        return value;
     
    }
    
    void put(int key, int val) {
        
        if(mp.find(key)!=mp.end())
        {
            ListNode* node=mp[key];
            mp.erase(key);
            delete_node(node);
        }
        
        if(mp.size()==cap)
        {
           ListNode* node=tail->prev;
            mp.erase(node->val1);
            delete_node(node);
            
        }
         ListNode* node=new ListNode(key , val);
        insert_node(node);
        
        mp[key]=head->next;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */