// LeetCode Problem : 126. Word Ladder II
// Link : https://leetcode.com/problems/word-ladder-ii/description/

class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        vector<vector<string>> ans;

        if (wordSet.find(endWord) == wordSet.end()) return ans;

        unordered_map<string, vector<string>> parent;  
        unordered_set<string> currentLevel, nextLevel;
        currentLevel.insert(beginWord);
        bool found = false;

        while (!currentLevel.empty() && !found) {
            for (auto& w : currentLevel) wordSet.erase(w);

            for (auto word : currentLevel) {
                string temp = word;

                for (int i = 0; i < temp.size(); i++) {
                    char original = temp[i];
                    for (char c = 'a'; c <= 'z'; c++) {
                        temp[i] = c;
                        if (wordSet.find(temp) != wordSet.end()) {
                            nextLevel.insert(temp);
                            parent[temp].push_back(word);
                            if (temp == endWord) found = true;
                        }
                    }
                    temp[i] = original;
                }
            }

            currentLevel = nextLevel;
            nextLevel.clear();
        }

        if (!found) return ans;

        vector<string> path = {endWord};
        backtrack(endWord, beginWord, parent, path, ans);
        return ans;
    }

private:
    void backtrack(string word, string& beginWord, unordered_map<string, vector<string>>& parent,
                   vector<string>& path, vector<vector<string>>& ans) {
        if (word == beginWord) {
            vector<string> temp = path;
            reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            return;
        }

        for (auto& p : parent[word]) {
            path.push_back(p);
            backtrack(p, beginWord, parent, path, ans);
            path.pop_back();
        }
    }
};
