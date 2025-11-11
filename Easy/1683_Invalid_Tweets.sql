# LeetCode Problem : 1683. Invalid Tweets
# Link : https://leetcode.com/problems/invalid-tweets/description/


SELECT tweet_id
FROM Tweets
WHERE LENGTH(content) > 15;
