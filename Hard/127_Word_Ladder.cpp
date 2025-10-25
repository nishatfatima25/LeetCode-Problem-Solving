// LeetCode Problem : 127. Word Ladder
// Link : https://leetcode.com/problems/word-ladder/description/

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        queue<pair<string,int>> q;
        //push the startig word along with the steps taken in queue
        q.push({beginWord,1});

        //put the wordlist in a set 
        unordered_set<string> st(wordList.begin(), wordList.end());

        //and erase the beginning word
        st.erase(beginWord);

        while(!q.empty()){
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();

            //iterate and replace all characters
            for(int i=0; i<word.size(); i++){
                //store the org character of word
                char original = word[i];
                
                //replace with other alphabets
                for(char ch = 'a'; ch <= 'z'; ch++){
                    word[i] = ch;

                    //now,check if it exists in the wordlist
                    if(st.find(word) != st.end()){

                        // if it does, erase it from set and push it in queue
                        st.erase(word);
                        q.push({word, steps+1});
                    }
                }

                //restore the original one
                word[i] = original;
            }

            //when find the target word return the steps
            if(word == endWord) return steps;
        }

        return 0;
    }
};
