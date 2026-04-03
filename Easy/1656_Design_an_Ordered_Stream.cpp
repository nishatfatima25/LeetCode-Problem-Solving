// LeetCode Problem : 1656. Design an Ordered Stream
// Link : https://leetcode.com/problems/design-an-ordered-stream/description/

class OrderedStream {
    vector<string> buff;
    int idx;
public:
    OrderedStream(int n) {
        buff.resize(n);
        idx = 0;
    }
    
    vector<string> insert(int idKey, string value) {
        buff[idKey - 1] = value;
        if(buff[idx].size() == 0) return {};

        vector<string> ans;
        while(idx < buff.size() && buff[idx].size() > 0) ans.push_back(buff[idx++]);

        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
