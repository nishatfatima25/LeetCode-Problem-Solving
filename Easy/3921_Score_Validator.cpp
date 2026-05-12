// LeetCode Problem : 3921. Score Validator
// Link : https://leetcode.com/problems/score-validator/description/

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0, counter = 0;
        for(int i=0; i<events.size(); i++){
            if(events[i] == "1" || events[i] == "2" || events[i] == "3"
            || events[i] == "4" || events[i] == "6" || events[i] == "0"){
                score += stoi(events[i]);
            }
            else if(events[i] == "WD" || events[i] == "NB") score += 1;
            else counter += 1;
            if(counter == 10) break;
        }

        return {score,counter};
    }
};
