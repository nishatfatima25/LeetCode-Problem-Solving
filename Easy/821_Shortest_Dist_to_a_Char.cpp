// LeetCode Problem : 821. Shortest Distance to a Character
// Link : https://leetcode.com/problemset/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        

        // store indices of c in a vector
        vector<int> charIndex;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                charIndex.push_back(i);
            }
        }


        vector<int> answer;
        int low = 0;
        int high = charIndex.size() - 1;
        int i=0;
        //find the shortest distance between two indices 
        for( i=0; i<s.size() && low < high; i++){

            int val = min(abs(charIndex[low] - i) , abs(charIndex[low+1] - i));
            answer.push_back(val);

            //if we have reached at our low+1 th index then
            // we will shift out window , i.e low++
            if(i == charIndex[low+1]){
                low++;
            }
        }

        //on reaching highest at last, the remaining elements are pushed by comparing with last
        //index only 
        
        for( i; i< s.size(); i++){
            answer.push_back(abs(charIndex[high] - i));
        }

        return answer;
    }
};
