// LeetCode Problem : 67. Add Binary
// Link : https://leetcode.com/problems/add-binary/description/

class Solution {
public:
    string addBinary(string a, string b) {
        int left = a.size()-1;
        int right = b.size() - 1;
        int carry = 0;

        string ans;

        while(left >=0 || right >=0 || carry){
            int sum = carry;
            if(left >= 0) sum += a[left--] - '0';
            if(right >=0) sum += b[right--] - '0';
            ans.push_back((sum%2) + '0');
            carry = sum /2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
